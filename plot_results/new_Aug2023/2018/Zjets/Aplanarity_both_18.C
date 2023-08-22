void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:23:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-293.0591,1.133333,2637.532);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,2232.831);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,621.2672);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,301.8641);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,166.4628);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,103.5626);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,59.83252);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,33.66355);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,27.68485);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,18.71704);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,10.92306);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,5.232518);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.314203);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,5.889109);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.305989);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,0.8699813);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.9199764);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,1.289409);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.5340569);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,37.17976);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,20.5254);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,17.40626);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,10.18268);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,9.720523);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,6.654799);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,3.639199);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,5.046343);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,2.732409);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,1.893887);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,1.241395);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.8958003);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,1.551431);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.6004905);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.6451643);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.6010823);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.755739);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.5340569);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(18425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}

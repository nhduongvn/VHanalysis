void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Aug 22 09:18:49 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-1.83321,1.133333,2.97989);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,166.3532);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,44.82221);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,15.62585);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,8.793939);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,6.84352);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.951816);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,4.905503);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.054404);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.6455623);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.7331616);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.6328772);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.101563);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.08894666);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.2589813);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.2126529);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,11.68652);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,4.732563);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,2.221854);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,1.844763);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,2.080345);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.8411414);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,1.816175);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.3213547);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.2792383);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.3073295);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.2971119);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.101563);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.07389829);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.1516248);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.1503795);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2217);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}

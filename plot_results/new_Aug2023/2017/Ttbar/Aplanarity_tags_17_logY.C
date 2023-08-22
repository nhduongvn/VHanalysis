void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Tue Aug 22 09:16:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-2.155994,1.133333,5.183278);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,14852.57);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,2137.77);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,585.4879);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,216.5214);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,100.0425);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,48.84005);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,27.00188);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,16.88234);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,10.58046);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,5.471831);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,3.6286);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,2.350164);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.26482);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.9310277);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.7298629);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.59404);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.09000805);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.3011497);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.08600721);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.07567688);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,31.40221);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,11.77644);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,6.166914);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,3.742705);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.544443);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,1.793534);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.317361);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.055099);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.82839);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.5824856);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.4978294);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.3967499);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.4036424);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.2543791);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2149227);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.1957107);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.06537165);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1522021);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.08600721);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.07567688);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(305979);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}

void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Aug 22 09:18:49 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-4.030143,1.133333,-0.8780103);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.0338242);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.0118566);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.006639273);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.004029747);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.002178507);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.001099283);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.000385567);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0003885351);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.0004394118);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0004150384);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.0004239412);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.00265162);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.001588559);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001175346);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.0009116923);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0006868189);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.000500168);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0002728624);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0002750462);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.0003109798);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.00029474);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.0003128379);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->Draw("HIST");
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

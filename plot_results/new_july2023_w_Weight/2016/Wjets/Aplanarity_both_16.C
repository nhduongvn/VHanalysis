void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:25:08 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-16.92628,1.133333,152.3365);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,128.9621);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,37.02671);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,22.33121);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,9.021934);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,4.272167);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.939867);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,1.175482);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,0.6837748);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.8091705);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.1721693);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.8164799);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.3919019);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.0002752946);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.0002697563);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,6.491469);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,7.865222);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,7.797612);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.186979);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,1.262428);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,1.087761);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,0.4350771);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.251904);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.453194);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.1558901);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.4659171);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.2424831);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.0002752946);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.0002697563);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(3431);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}

void Z_jetmass_noJEC_tags_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_18/Z_jetmass_noJEC_tags_18
//=========  (Tue Aug 22 09:16:48 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_18 = new TCanvas("Z_jetmass_noJEC_tags_18", "Z_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_18->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_18->Range(-60,-3.171464,340,-0.9889647);
   Z_jetmass_noJEC_tags_18->SetFillColor(0);
   Z_jetmass_noJEC_tags_18->SetBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetBorderSize(2);
   Z_jetmass_noJEC_tags_18->SetLogy();
   Z_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(3,0.002284175);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(4,0.00748187);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(5,0.0222907);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(6,0.03275189);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(7,0.02906283);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(8,0.02161207);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(9,0.0252991);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(10,0.007294613);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(11,0.007925135);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(12,0.006677846);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(13,0.004253991);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(14,0.002227489);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(15,0.002398405);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(17,0.002227489);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinContent(27,0.002259486);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(3,0.002284175);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(4,0.004334278);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(5,0.007102873);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(6,0.009109556);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(7,0.008545869);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(8,0.007072537);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(9,0.007700869);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(10,0.004255149);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(11,0.00421902);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(12,0.003861587);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(13,0.003011875);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(14,0.002227489);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(15,0.002398405);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(17,0.002227489);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetBinError(27,0.002259486);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_18->Modified();
   Z_jetmass_noJEC_tags_18->cd();
   Z_jetmass_noJEC_tags_18->SetSelected(Z_jetmass_noJEC_tags_18);
}

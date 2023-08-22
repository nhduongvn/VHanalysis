void H_jetmass_noJEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_16/H_jetmass_noJEC_tags_16
//=========  (Tue Aug 22 09:20:53 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_16 = new TCanvas("H_jetmass_noJEC_tags_16", "H_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_16->SetHighLightColor(2);
   H_jetmass_noJEC_tags_16->Range(-60,-0.002125766,340,0.0191319);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(3,0.002186347);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(5,0.01451362);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(6,0.01619631);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(7,0.01103847);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(8,0.006316116);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(9,0.006269978);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(10,0.006657939);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(12,0.002381752);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(13,0.004313137);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(14,0.004597283);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinContent(39,0.003126194);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(3,0.002186347);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(5,0.005521579);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(6,0.005748275);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(7,0.004944289);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(8,0.00367606);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(9,0.003625552);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(10,0.003862608);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(12,0.002381752);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(13,0.003050143);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(14,0.003251698);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetBinError(39,0.003126194);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_16->Modified();
   H_jetmass_noJEC_tags_16->cd();
   H_jetmass_noJEC_tags_16->SetSelected(H_jetmass_noJEC_tags_16);
}

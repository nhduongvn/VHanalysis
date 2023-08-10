void H_jetmass_noJEC_tags_17()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_17/H_jetmass_noJEC_tags_17
//=========  (Thu Aug 10 12:23:42 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_17 = new TCanvas("H_jetmass_noJEC_tags_17", "H_jetmass_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_17->SetHighLightColor(2);
   H_jetmass_noJEC_tags_17->Range(-60,-1.239729,340,11.15756);
   H_jetmass_noJEC_tags_17->SetFillColor(0);
   H_jetmass_noJEC_tags_17->SetBorderMode(0);
   H_jetmass_noJEC_tags_17->SetBorderSize(2);
   H_jetmass_noJEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(3,0.5848729);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(4,3.269143);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(5,9.44555);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(6,7.389911);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(7,8.621308);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(8,7.373183);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(9,3.138841);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(10,2.323874);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(11,1.790693);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(12,1.291306);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(13,0.9691909);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(14,0.8874041);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(15,0.9826881);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(16,0.7854925);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(17,0.2961846);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(26,0.2309217);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(3,0.4135676);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(4,0.9999157);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(5,1.626869);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(6,1.477073);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(7,1.604658);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(8,1.489221);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(9,0.9594123);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(10,0.826844);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(11,0.692854);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(12,0.5869255);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(13,0.503771);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(14,0.5306357);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(15,0.5675216);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(16,0.4567576);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(17,0.2961846);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(26,0.2309217);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetEntries(178);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_17->Modified();
   H_jetmass_noJEC_tags_17->cd();
   H_jetmass_noJEC_tags_17->SetSelected(H_jetmass_noJEC_tags_17);
}

void H_jetmass_noJEC_tags_16_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_16/H_jetmass_noJEC_tags_16
//=========  (Tue Aug 22 09:16:36 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_16 = new TCanvas("H_jetmass_noJEC_tags_16", "H_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_16->SetHighLightColor(2);
   H_jetmass_noJEC_tags_16->Range(-60,-1.197892,340,1.328371);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLogy();
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(2,0.2268635);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(3,0.4043153);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(4,4.491835);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(5,4.885468);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(6,6.283412);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(7,5.654876);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(8,1.353442);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(9,1.512594);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(10,2.534236);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(11,0.8889277);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(12,0.8727542);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(13,0.6689222);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(14,0.4650306);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(15,0.8820738);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(20,0.2387884);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(21,0.2385445);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(52,0.2289552);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(2,0.2268635);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(3,0.2859622);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(4,0.9673821);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(5,1.007886);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(6,1.128476);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(7,1.079573);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(8,0.5198917);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(9,0.5591929);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(10,0.7348889);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(11,0.4448572);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(12,0.4368516);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(13,0.3873403);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(14,0.3290464);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(15,0.441267);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(20,0.2387884);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(21,0.2385445);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(52,0.2289552);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetEntries(156);

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

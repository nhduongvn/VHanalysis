void H_jetmass_noJEC_tags_17_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_17/H_jetmass_noJEC_tags_17
//=========  (Tue Aug 22 09:16:37 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_17 = new TCanvas("H_jetmass_noJEC_tags_17", "H_jetmass_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_17->SetHighLightColor(2);
   H_jetmass_noJEC_tags_17->Range(-60,-1.230201,340,1.436669);
   H_jetmass_noJEC_tags_17->SetFillColor(0);
   H_jetmass_noJEC_tags_17->SetBorderMode(0);
   H_jetmass_noJEC_tags_17->SetBorderSize(2);
   H_jetmass_noJEC_tags_17->SetLogy();
   H_jetmass_noJEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(3,0.4886465);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(4,2.64906);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(5,7.806078);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(6,6.062078);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(7,6.9671);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(8,6.166192);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(9,2.601605);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(10,2.00623);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(11,1.556947);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(12,1.047044);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(13,0.8653275);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(14,0.8177383);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(15,0.8972571);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(16,0.7215618);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(17,0.2828563);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(26,0.2175282);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(3,0.3490315);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(4,0.8126968);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(5,1.34962);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(6,1.218683);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(7,1.303191);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(8,1.24737);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(9,0.7911767);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(10,0.7159733);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(11,0.6022934);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(12,0.4722877);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(13,0.4458491);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(14,0.4904431);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(15,0.519714);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(16,0.4188737);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(17,0.2828563);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(26,0.2175282);
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

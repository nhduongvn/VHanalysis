void Z_jetmass_noJEC_tags_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_17/Z_jetmass_noJEC_tags_17
//=========  (Tue Aug 22 09:21:06 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_17 = new TCanvas("Z_jetmass_noJEC_tags_17", "Z_jetmass_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_17->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_17->Range(-60,-0.001683938,340,0.01515544);
   Z_jetmass_noJEC_tags_17->SetFillColor(0);
   Z_jetmass_noJEC_tags_17->SetBorderMode(0);
   Z_jetmass_noJEC_tags_17->SetBorderSize(2);
   Z_jetmass_noJEC_tags_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(3,0.0003120408);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(4,0.001992356);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(5,0.009254012);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(6,0.01283);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(7,0.008961451);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(8,0.006746444);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(9,0.005259073);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(10,0.002305516);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(11,0.002382186);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(12,0.0008957177);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(13,0.001342268);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(14,0.0009926449);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(15,0.0006733941);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(16,0.0002448374);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(17,0.0002500685);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(20,0.0004885947);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(23,0.0002262863);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(25,0.0001301801);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(3,0.0002233395);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(4,0.0006391869);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(5,0.001358123);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(6,0.001660254);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(7,0.001353457);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(8,0.001206551);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(9,0.001072713);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(10,0.0006770044);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(11,0.0006759353);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(12,0.0004049917);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(13,0.0005234302);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(14,0.0004828937);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(15,0.0003888236);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(16,0.0002448374);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(17,0.0001990359);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(20,0.0003461888);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(23,0.0002262863);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(25,0.0001301801);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetEntries(277);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_17->Modified();
   Z_jetmass_noJEC_tags_17->cd();
   Z_jetmass_noJEC_tags_17->SetSelected(Z_jetmass_noJEC_tags_17);
}

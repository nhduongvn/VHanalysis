void H_jetmass_noJEC_both_17_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_17/H_jetmass_noJEC_both_17
//=========  (Tue Aug 22 09:18:59 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_17 = new TCanvas("H_jetmass_noJEC_both_17", "H_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_17->SetHighLightColor(2);
   H_jetmass_noJEC_both_17->Range(-60,-4.902124,340,-1.326863);
   H_jetmass_noJEC_both_17->SetFillColor(0);
   H_jetmass_noJEC_both_17->SetBorderMode(0);
   H_jetmass_noJEC_both_17->SetBorderSize(2);
   H_jetmass_noJEC_both_17->SetLogy();
   H_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(4,0.004720969);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(5,0.009951895);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(6,0.01091597);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(7,0.008351624);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(8,0.007258722);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(9,0.004964367);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(10,0.003645201);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(11,0.001557849);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(12,0.003463132);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(13,0.001976173);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(14,0.0008359088);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(15,0.002089659);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(16,0.0004708304);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(17,0.0002994564);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(18,0.0002404726);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(20,5.707322e-05);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(24,0.0002192331);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(27,0.0002324802);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(28,0.0002249039);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(29,0.0002041767);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(4,0.0009686576);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(5,0.001413996);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(6,0.001540191);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(7,0.001290456);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(8,0.001231081);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(9,0.001015995);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(10,0.0008528011);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(11,0.0005702882);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(12,0.0008876117);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(13,0.0006654897);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(14,0.0004336086);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(15,0.0007062797);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(16,0.0003337479);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(17,0.0002465491);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(18,0.0002404726);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(20,5.707322e-05);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(24,0.0002192331);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(27,0.0002324802);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(28,0.0002249039);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(29,0.0002041767);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_17->Modified();
   H_jetmass_noJEC_both_17->cd();
   H_jetmass_noJEC_both_17->SetSelected(H_jetmass_noJEC_both_17);
}

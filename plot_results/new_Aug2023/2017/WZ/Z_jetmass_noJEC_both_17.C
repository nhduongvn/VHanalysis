void Z_jetmass_noJEC_both_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_17/Z_jetmass_noJEC_both_17
//=========  (Tue Aug 22 09:23:45 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_17 = new TCanvas("Z_jetmass_noJEC_both_17", "Z_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_17->SetHighLightColor(2);
   Z_jetmass_noJEC_both_17->Range(-60,-0.2310472,340,2.079425);
   Z_jetmass_noJEC_both_17->SetFillColor(0);
   Z_jetmass_noJEC_both_17->SetBorderMode(0);
   Z_jetmass_noJEC_both_17->SetBorderSize(2);
   Z_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_7 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_7","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(4,0.3158821);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(5,1.664838);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(6,1.76036);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(7,1.170539);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(8,0.2962674);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(9,0.6080239);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(10,0.3176054);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(13,0.1465374);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(14,0.2329143);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(4,0.3158821);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(5,0.6356721);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(6,0.6730729);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(7,0.5367586);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(8,0.2962674);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(9,0.4327464);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(10,0.3176054);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(13,0.1465374);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(14,0.2329143);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_17->Modified();
   Z_jetmass_noJEC_both_17->cd();
   Z_jetmass_noJEC_both_17->SetSelected(Z_jetmass_noJEC_both_17);
}

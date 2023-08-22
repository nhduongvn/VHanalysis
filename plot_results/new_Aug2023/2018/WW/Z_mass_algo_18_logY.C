void Z_mass_algo_18_logY()
{
//=========Macro generated from canvas: Z_mass_algo_18/Z_mass_algo_18
//=========  (Tue Aug 22 09:16:53 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_algo_18 = new TCanvas("Z_mass_algo_18", "Z_mass_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_18->SetHighLightColor(2);
   Z_mass_algo_18->Range(-80,-0.9489888,453.3333,1.069673);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLogy();
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass_stack_6 = new TH1D("VbbHcc_algo_Z_mass_stack_6","",40,0,400);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(6,1.20895);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(8,1.179985);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(9,3.329645);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(10,2.324962);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(11,1.351601);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(12,1.667361);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(13,3.892759);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(16,0.3970443);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(17,2.159532);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(18,0.5354066);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(19,0.7520305);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(20,0.3580201);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(21,0.5622814);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(24,0.7264565);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(25,0.7643472);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(26,1.285877);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(27,0.5430975);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(30,0.7561791);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(35,0.8161531);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(37,1.250772);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(38,0.5922167);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(39,0.784061);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(41,12.44938);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(6,0.8548599);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(8,0.8356457);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(9,1.359806);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(10,1.233565);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(11,0.9608021);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(12,0.9716985);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(13,2.721694);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(16,0.3970443);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(17,1.25034);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(18,0.5354066);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(19,0.7520305);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(20,0.3580201);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(21,0.5622814);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(24,0.7264565);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(25,0.7643472);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(26,0.9218814);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(27,0.5430975);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(30,0.7561791);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(35,0.8161531);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(37,0.9037643);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(38,0.5922167);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(39,0.784061);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(41,3.018575);
   VbbHcc_algo_Z_mass_stack_6->SetEntries(60);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_mass_stack_6->SetFillColor(ci);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_18->Modified();
   Z_mass_algo_18->cd();
   Z_mass_algo_18->SetSelected(Z_mass_algo_18);
}

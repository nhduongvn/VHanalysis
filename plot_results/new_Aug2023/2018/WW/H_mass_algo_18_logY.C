void H_mass_algo_18_logY()
{
//=========Macro generated from canvas: H_mass_algo_18/H_mass_algo_18
//=========  (Tue Aug 22 09:16:55 2023) by ROOT version 6.14/09
   TCanvas *H_mass_algo_18 = new TCanvas("H_mass_algo_18", "H_mass_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_algo_18->SetHighLightColor(2);
   H_mass_algo_18->Range(-80,-0.9200251,453.3333,0.8089995);
   H_mass_algo_18->SetFillColor(0);
   H_mass_algo_18->SetBorderMode(0);
   H_mass_algo_18->SetBorderSize(2);
   H_mass_algo_18->SetLogy();
   H_mass_algo_18->SetLeftMargin(0.15);
   H_mass_algo_18->SetFrameBorderMode(0);
   H_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass_stack_6 = new TH1D("VbbHcc_algo_H_mass_stack_6","",40,0,400);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(7,0.6225638);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(8,0.9006586);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(9,2.283222);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(11,0.7455435);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(12,0.5460595);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(13,0.5527369);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(15,0.6076863);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(16,0.5692831);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(17,0.5643811);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(18,0.602893);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(20,1.369056);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(21,0.3970443);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(22,1.148944);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(25,0.5797773);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(26,0.784061);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(27,0.4939036);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(30,0.7568679);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(32,0.3580201);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(33,1.455056);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(34,0.5922167);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(35,0.8437825);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(36,0.7052527);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(37,0.4321114);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(38,0.8161531);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(41,20.96084);
   VbbHcc_algo_H_mass_stack_6->SetBinError(7,0.6225638);
   VbbHcc_algo_H_mass_stack_6->SetBinError(8,0.9006586);
   VbbHcc_algo_H_mass_stack_6->SetBinError(9,1.142368);
   VbbHcc_algo_H_mass_stack_6->SetBinError(11,0.7455435);
   VbbHcc_algo_H_mass_stack_6->SetBinError(12,0.5460595);
   VbbHcc_algo_H_mass_stack_6->SetBinError(13,0.5527369);
   VbbHcc_algo_H_mass_stack_6->SetBinError(15,0.6076863);
   VbbHcc_algo_H_mass_stack_6->SetBinError(16,0.5692831);
   VbbHcc_algo_H_mass_stack_6->SetBinError(17,0.5643811);
   VbbHcc_algo_H_mass_stack_6->SetBinError(18,0.602893);
   VbbHcc_algo_H_mass_stack_6->SetBinError(20,0.9696816);
   VbbHcc_algo_H_mass_stack_6->SetBinError(21,0.3970443);
   VbbHcc_algo_H_mass_stack_6->SetBinError(22,0.8126627);
   VbbHcc_algo_H_mass_stack_6->SetBinError(25,0.5797773);
   VbbHcc_algo_H_mass_stack_6->SetBinError(26,0.784061);
   VbbHcc_algo_H_mass_stack_6->SetBinError(27,0.4939036);
   VbbHcc_algo_H_mass_stack_6->SetBinError(30,0.7568679);
   VbbHcc_algo_H_mass_stack_6->SetBinError(32,0.3580201);
   VbbHcc_algo_H_mass_stack_6->SetBinError(33,1.455056);
   VbbHcc_algo_H_mass_stack_6->SetBinError(34,0.5922167);
   VbbHcc_algo_H_mass_stack_6->SetBinError(35,0.6272842);
   VbbHcc_algo_H_mass_stack_6->SetBinError(36,0.7052527);
   VbbHcc_algo_H_mass_stack_6->SetBinError(37,0.4321114);
   VbbHcc_algo_H_mass_stack_6->SetBinError(38,0.8161531);
   VbbHcc_algo_H_mass_stack_6->SetBinError(41,4.310059);
   VbbHcc_algo_H_mass_stack_6->SetEntries(60);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_mass_stack_6->SetFillColor(ci);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_algo_18->Modified();
   H_mass_algo_18->cd();
   H_mass_algo_18->SetSelected(H_mass_algo_18);
}

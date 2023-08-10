void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 10:42:28 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-1.737043,1.133333,3.997094);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,1400.011);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,1147.079);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,633.8311);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,413.3139);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,207.9231);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,83.28288);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,39.76095);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,13.87531);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,2.481083);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,2.410485);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,0.5258938);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.1372148);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.7853563);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.4091388);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.7071319);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1817852);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.2445201);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,68.09376);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,48.13905);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,32.63772);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,32.60685);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,15.29232);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,8.884838);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,13.15922);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,4.462387);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.7558492);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,0.7397596);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,0.3219228);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.1372148);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.4387972);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.224777);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.4685435);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1425271);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.2445201);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(15424);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}

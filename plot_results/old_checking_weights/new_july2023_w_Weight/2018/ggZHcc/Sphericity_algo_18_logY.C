void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 10:42:28 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-4.222357,1.133333,-0.1866019);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.1332926);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.1356044);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.06837977);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.04796716);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.02785545);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.009327937);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.004754963);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.002480536);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0004049829);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0003400733);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0004371028);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(12,0.0003400733);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0003035629);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.006959682);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.007704532);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.004887342);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.004160502);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.004672176);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001855263);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.001333521);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0009414042);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0004049829);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0003400733);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0004371028);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(12,0.0003400733);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0003035629);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1270);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->Draw("HIST");
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

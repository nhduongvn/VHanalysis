void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Tue Aug 22 09:17:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-2.36675,1.133333,6.475519);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,205941.4);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,25568.51);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,5140.177);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1371.89);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,440.8506);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,178.0026);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,77.02979);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,37.66274);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,20.77072);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,10.6625);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,7.155635);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,3.516092);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,1.964839);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.416525);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.5866338);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.2520873);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.07482353);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.2847521);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.2815688);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(20,0.06584265);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,133.3326);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,46.63905);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,20.89177);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,10.7228);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,5.702585);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,3.734305);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,2.555401);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.735493);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.214045);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.8305526);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.7028591);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4887792);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.3544651);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.3160551);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.1819209);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1290561);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.07482353);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1380413);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.1425144);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(20,0.06584265);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3537992);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}

void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Tue Aug 22 09:17:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-2.549942,1.133333,4.385141);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,2594.68);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,2453.338);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,1442.932);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,849.164);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,420.9274);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,180.2923);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,56.27977);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,17.96022);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,6.776648);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,3.671485);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,0.957257);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,0.9478719);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.8999733);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.2879223);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.593899);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,3.307314);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.622597);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.04368118);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.02783533);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,33.88199);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,35.09573);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,27.25856);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,21.65667);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,12.7569);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,7.850035);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,4.462413);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,2.916287);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.233);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.9240125);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.3360152);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.322482);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.3179793);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.1530746);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.2040465);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,3.114277);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.3332951);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.04368118);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.02783533);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(54777);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}

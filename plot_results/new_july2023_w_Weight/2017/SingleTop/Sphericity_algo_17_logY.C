void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 10:42:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-2.567521,1.133333,4.526729);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,3465.413);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,3462.92);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,1947.535);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1108.102);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,554.0299);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,263.7189);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,111.7063);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,45.92666);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,23.09825);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,12.21488);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,6.741513);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,6.471495);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,2.406104);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,1.126261);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,1.581992);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,1.076382);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.9355839);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.271035);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.1589904);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.1020392);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.027729);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,25.82178);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,25.71967);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,19.22763);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,14.63702);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,10.51143);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,7.109105);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,4.7047);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,2.884115);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.171353);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.45035);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.11776);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.120705);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.639453);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.2575722);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.5709323);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.4420207);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.3801509);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.6209166);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.08806805);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.05422588);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.027729);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(138653);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->Draw("HIST");
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

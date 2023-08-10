void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-3.462116,1.133333,2.270113);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,26.26279);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,26.0652);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,14.29853);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,9.721976);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,6.385801);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,2.84902);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.7689366);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.2109688);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.06984766);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.02468553);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.008843068);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.006130651);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.003610912);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.002583076);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.004512033);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.2292101);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.2278363);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1682475);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1394444);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.1135978);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.07533055);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.03906608);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.02015306);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.0111001);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.00659304);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.004040203);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.003542593);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.002133986);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.002011135);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.002618911);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(47732);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->Draw("HIST");
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

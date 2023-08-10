void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-0.1846279,1.133333,6.815123);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,688016.4);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,612582.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,355078.5);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,189795);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,90647.12);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,44855.23);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,13799.48);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3724.653);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1703.171);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,918.4954);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,369.5151);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,500.9028);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,138.0959);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,91.34093);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,59.97646);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,78.53044);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,626.9709);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,35.40044);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,6.552051);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,15.74401);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,13115.06);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,12832);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,24664.93);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,6225.189);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,4445.768);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,3489.688);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,2370.135);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,1036.862);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,601.3059);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,445.3091);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,106.8073);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,336.1916);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,55.46487);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,38.88319);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,34.96583);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,36.72199);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,542.1065);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,17.84378);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,6.552051);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,11.3812);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(112239);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->Draw("HIST");
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

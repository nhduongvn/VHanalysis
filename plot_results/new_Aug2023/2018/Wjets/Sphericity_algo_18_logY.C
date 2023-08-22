void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:17:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-1.730274,1.133333,3.958081);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,1293.293);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,1055.131);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,590.064);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,388.2847);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,189.0763);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,82.00544);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,38.87267);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,13.59046);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,2.371131);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,2.520182);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,0.4532679);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.1379088);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.7811874);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.4176332);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.7252399);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1668532);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.2547378);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,65.68987);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,46.85129);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,31.48204);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,32.30574);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,14.21513);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,8.89092);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,12.5186);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,4.223229);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.7554068);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,0.7835273);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,0.3209923);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.1379088);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.4520283);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.2227392);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.484007);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1309316);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.2547378);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(13622);

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

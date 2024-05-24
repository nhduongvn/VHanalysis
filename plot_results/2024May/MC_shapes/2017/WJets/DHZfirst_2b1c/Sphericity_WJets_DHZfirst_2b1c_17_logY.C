#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_WJets_DHZfirst_2b1c_17/Sphericity_WJets_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_DHZfirst_2b1c_17 = new TCanvas("Sphericity_WJets_DHZfirst_2b1c_17", "Sphericity_WJets_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_DHZfirst_2b1c_17->SetHighLightColor(2);
   Sphericity_WJets_DHZfirst_2b1c_17->Range(-0.2,-2.135514,1.133333,3.842392);
   Sphericity_WJets_DHZfirst_2b1c_17->SetFillColor(0);
   Sphericity_WJets_DHZfirst_2b1c_17->SetFillStyle(4000);
   Sphericity_WJets_DHZfirst_2b1c_17->SetBorderMode(0);
   Sphericity_WJets_DHZfirst_2b1c_17->SetBorderSize(2);
   Sphericity_WJets_DHZfirst_2b1c_17->SetLogy();
   Sphericity_WJets_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_WJets_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WJets_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_WJets_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WJets_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4031 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4031","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(1,926.941);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(2,724.7059);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(3,439.4129);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(4,246.7373);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(5,115.7782);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(6,44.40697);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(7,18.38634);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(8,3.562712);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(9,0.7031997);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(10,1.052021);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(11,0.5183416);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(12,0.1566245);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(13,0.498598);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(14,0.0611162);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(15,0.05798378);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(16,0.4668135);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinContent(18,0.07579512);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(1,37.09238);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(2,30.04912);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(3,26.63788);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(4,18.80307);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(5,16.02283);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(6,4.325445);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(7,4.550239);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(8,0.8631);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(9,0.2540647);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(10,0.5066637);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(11,0.417371);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(12,0.117682);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(13,0.3027495);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(14,0.04715039);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(15,0.05798378);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(16,0.3386434);
   VH_DHZfirst_2b1c_Sphericity__4031->SetBinError(18,0.07579512);
   VH_DHZfirst_2b1c_Sphericity__4031->SetEntries(14547);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4031->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4031->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4031->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4031->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4031->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4031->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4031->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4031->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4031->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4031->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4031->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4031->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4031->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4031->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4031->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4031->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_DHZfirst_2b1c_17->Modified();
   Sphericity_WJets_DHZfirst_2b1c_17->cd();
   Sphericity_WJets_DHZfirst_2b1c_17->SetSelected(Sphericity_WJets_DHZfirst_2b1c_17);
}

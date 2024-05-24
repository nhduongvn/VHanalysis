#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagFirst_17/Aplanarity_ZJets_tagFirst_17
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagFirst_17 = new TCanvas("Aplanarity_ZJets_tagFirst_17", "Aplanarity_ZJets_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagFirst_17->SetHighLightColor(2);
   Aplanarity_ZJets_tagFirst_17->Range(-0.2,-1381.725,1.133333,12435.52);
   Aplanarity_ZJets_tagFirst_17->SetFillColor(0);
   Aplanarity_ZJets_tagFirst_17->SetFillStyle(4000);
   Aplanarity_ZJets_tagFirst_17->SetBorderMode(0);
   Aplanarity_ZJets_tagFirst_17->SetBorderSize(2);
   Aplanarity_ZJets_tagFirst_17->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_17->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__464 = new TH1D("VH_tagFirst_Aplanarity__464","",50,0,1);
   VH_tagFirst_Aplanarity__464->SetBinContent(1,10527.43);
   VH_tagFirst_Aplanarity__464->SetBinContent(2,1167.127);
   VH_tagFirst_Aplanarity__464->SetBinContent(3,311.5126);
   VH_tagFirst_Aplanarity__464->SetBinContent(4,106.7569);
   VH_tagFirst_Aplanarity__464->SetBinContent(5,43.48722);
   VH_tagFirst_Aplanarity__464->SetBinContent(6,18.08984);
   VH_tagFirst_Aplanarity__464->SetBinContent(7,10.5798);
   VH_tagFirst_Aplanarity__464->SetBinContent(8,6.20929);
   VH_tagFirst_Aplanarity__464->SetBinContent(9,4.000149);
   VH_tagFirst_Aplanarity__464->SetBinContent(10,2.915889);
   VH_tagFirst_Aplanarity__464->SetBinContent(11,2.606569);
   VH_tagFirst_Aplanarity__464->SetBinContent(12,0.532465);
   VH_tagFirst_Aplanarity__464->SetBinContent(13,0.2994622);
   VH_tagFirst_Aplanarity__464->SetBinContent(14,0.4719848);
   VH_tagFirst_Aplanarity__464->SetBinContent(15,0.1256136);
   VH_tagFirst_Aplanarity__464->SetBinContent(16,0.1196562);
   VH_tagFirst_Aplanarity__464->SetBinContent(17,0.1095954);
   VH_tagFirst_Aplanarity__464->SetBinError(1,68.93001);
   VH_tagFirst_Aplanarity__464->SetBinError(2,25.92847);
   VH_tagFirst_Aplanarity__464->SetBinError(3,16.56307);
   VH_tagFirst_Aplanarity__464->SetBinError(4,7.302129);
   VH_tagFirst_Aplanarity__464->SetBinError(5,3.513624);
   VH_tagFirst_Aplanarity__464->SetBinError(6,1.798183);
   VH_tagFirst_Aplanarity__464->SetBinError(7,1.770175);
   VH_tagFirst_Aplanarity__464->SetBinError(8,2.36369);
   VH_tagFirst_Aplanarity__464->SetBinError(9,0.8903859);
   VH_tagFirst_Aplanarity__464->SetBinError(10,0.6654938);
   VH_tagFirst_Aplanarity__464->SetBinError(11,0.9065886);
   VH_tagFirst_Aplanarity__464->SetBinError(12,0.2374795);
   VH_tagFirst_Aplanarity__464->SetBinError(13,0.1454672);
   VH_tagFirst_Aplanarity__464->SetBinError(14,0.2100241);
   VH_tagFirst_Aplanarity__464->SetBinError(15,0.08952342);
   VH_tagFirst_Aplanarity__464->SetBinError(16,0.1196562);
   VH_tagFirst_Aplanarity__464->SetBinError(17,0.07779615);
   VH_tagFirst_Aplanarity__464->SetEntries(95670);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__464->SetLineColor(ci);
   VH_tagFirst_Aplanarity__464->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__464->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__464->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__464->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__464->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__464->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__464->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__464->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__464->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__464->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__464->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__464->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__464->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__464->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__464->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagFirst_17->Modified();
   Aplanarity_ZJets_tagFirst_17->cd();
   Aplanarity_ZJets_tagFirst_17->SetSelected(Aplanarity_ZJets_tagFirst_17);
}

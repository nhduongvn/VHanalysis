#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagFirst_2b1c_16/Aplanarity_WJets_tagFirst_2b1c_16
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagFirst_2b1c_16 = new TCanvas("Aplanarity_WJets_tagFirst_2b1c_16", "Aplanarity_WJets_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagFirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_WJets_tagFirst_2b1c_16->Range(-0.2,-3079.29,1.133333,27713.61);
   Aplanarity_WJets_tagFirst_2b1c_16->SetFillColor(0);
   Aplanarity_WJets_tagFirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_WJets_tagFirst_2b1c_16->SetBorderMode(0);
   Aplanarity_WJets_tagFirst_2b1c_16->SetBorderSize(2);
   Aplanarity_WJets_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_WJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_WJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2620 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2620","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(1,23461.26);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(2,2744.515);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(3,718.8511);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(4,229.7908);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(5,82.63949);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(6,48.73751);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(7,38.55985);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(8,13.33703);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(9,7.143378);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(10,4.713459);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(11,1.863229);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(12,2.886175);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(13,0.7434814);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(14,0.4081989);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(15,0.440043);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(16,0.06049229);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(18,0.2497995);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(20,0.1187145);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinContent(21,0.06642157);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(1,155.3034);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(2,61.37916);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(3,33.42386);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(4,18.05935);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(5,8.516624);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(6,7.233079);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(7,8.894253);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(8,2.2222);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(9,1.624509);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(10,1.578986);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(11,0.3997175);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(12,1.003356);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(13,0.3292135);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(14,0.3446537);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(15,0.2383158);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(16,0.05973594);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(18,0.2497995);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(20,0.09043222);
   VH_tagFirst_2b1c_Aplanarity__2620->SetBinError(21,0.06642157);
   VH_tagFirst_2b1c_Aplanarity__2620->SetEntries(261754);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2620->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2620->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2620->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2620->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2620->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2620->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2620->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2620->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2620->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2620->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2620->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2620->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2620->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2620->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2620->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2620->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagFirst_2b1c_16->Modified();
   Aplanarity_WJets_tagFirst_2b1c_16->cd();
   Aplanarity_WJets_tagFirst_2b1c_16->SetSelected(Aplanarity_WJets_tagFirst_2b1c_16);
}

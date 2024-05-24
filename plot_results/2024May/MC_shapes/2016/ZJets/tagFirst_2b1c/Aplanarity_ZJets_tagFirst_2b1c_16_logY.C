#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagFirst_2b1c_16/Aplanarity_ZJets_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagFirst_2b1c_16 = new TCanvas("Aplanarity_ZJets_tagFirst_2b1c_16", "Aplanarity_ZJets_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagFirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_ZJets_tagFirst_2b1c_16->Range(-0.2,-2.253315,1.133333,5.687088);
   Aplanarity_ZJets_tagFirst_2b1c_16->SetFillColor(0);
   Aplanarity_ZJets_tagFirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_ZJets_tagFirst_2b1c_16->SetBorderMode(0);
   Aplanarity_ZJets_tagFirst_2b1c_16->SetBorderSize(2);
   Aplanarity_ZJets_tagFirst_2b1c_16->SetLogy();
   Aplanarity_ZJets_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2623 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2623","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(1,41257.1);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(2,4904.411);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(3,1204.616);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(4,380.9322);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(5,156.7156);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(6,67.30508);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(7,41.01239);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(8,25.10192);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(9,10.23708);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(10,13.9723);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(11,6.377518);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(12,3.253067);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(13,2.213214);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(14,1.282778);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(15,0.5735813);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(16,0.8023799);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(17,0.1106335);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(18,0.0862457);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinContent(19,0.06946332);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(1,136.0797);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(2,54.46819);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(3,26.36274);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(4,14.57591);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(5,8.603566);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(6,4.309862);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(7,3.269014);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(8,2.929155);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(9,1.111672);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(10,3.223449);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(11,0.9208801);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(12,0.5838576);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(13,0.4877735);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(14,0.3920811);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(15,0.1952269);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(16,0.3612052);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(17,0.0782372);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(18,0.0862457);
   VH_tagFirst_2b1c_Aplanarity__2623->SetBinError(19,0.06946332);
   VH_tagFirst_2b1c_Aplanarity__2623->SetEntries(422319);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2623->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2623->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2623->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2623->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2623->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2623->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2623->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2623->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2623->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2623->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2623->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2623->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2623->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2623->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2623->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2623->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagFirst_2b1c_16->Modified();
   Aplanarity_ZJets_tagFirst_2b1c_16->cd();
   Aplanarity_ZJets_tagFirst_2b1c_16->SetSelected(Aplanarity_ZJets_tagFirst_2b1c_16);
}

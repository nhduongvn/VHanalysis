#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagFirst_17/Aplanarity_SingleTop_tagFirst_17
//=========  (Fri May 24 12:42:12 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagFirst_17 = new TCanvas("Aplanarity_SingleTop_tagFirst_17", "Aplanarity_SingleTop_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagFirst_17->SetHighLightColor(2);
   Aplanarity_SingleTop_tagFirst_17->Range(-0.2,-1865.913,1.133333,16793.21);
   Aplanarity_SingleTop_tagFirst_17->SetFillColor(0);
   Aplanarity_SingleTop_tagFirst_17->SetFillStyle(4000);
   Aplanarity_SingleTop_tagFirst_17->SetBorderMode(0);
   Aplanarity_SingleTop_tagFirst_17->SetBorderSize(2);
   Aplanarity_SingleTop_tagFirst_17->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_17->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__470 = new TH1D("VH_tagFirst_Aplanarity__470","",50,0,1);
   VH_tagFirst_Aplanarity__470->SetBinContent(1,14216.48);
   VH_tagFirst_Aplanarity__470->SetBinContent(2,1989.028);
   VH_tagFirst_Aplanarity__470->SetBinContent(3,529.0255);
   VH_tagFirst_Aplanarity__470->SetBinContent(4,170.4964);
   VH_tagFirst_Aplanarity__470->SetBinContent(5,75.75221);
   VH_tagFirst_Aplanarity__470->SetBinContent(6,36.20329);
   VH_tagFirst_Aplanarity__470->SetBinContent(7,24.71262);
   VH_tagFirst_Aplanarity__470->SetBinContent(8,11.14081);
   VH_tagFirst_Aplanarity__470->SetBinContent(9,5.813458);
   VH_tagFirst_Aplanarity__470->SetBinContent(10,4.225426);
   VH_tagFirst_Aplanarity__470->SetBinContent(11,3.810614);
   VH_tagFirst_Aplanarity__470->SetBinContent(12,2.872158);
   VH_tagFirst_Aplanarity__470->SetBinContent(13,1.523361);
   VH_tagFirst_Aplanarity__470->SetBinContent(14,1.195186);
   VH_tagFirst_Aplanarity__470->SetBinContent(15,0.3446602);
   VH_tagFirst_Aplanarity__470->SetBinContent(16,0.1583968);
   VH_tagFirst_Aplanarity__470->SetBinContent(17,0.2023658);
   VH_tagFirst_Aplanarity__470->SetBinContent(18,0.521713);
   VH_tagFirst_Aplanarity__470->SetBinContent(19,0.1874799);
   VH_tagFirst_Aplanarity__470->SetBinError(1,55.42882);
   VH_tagFirst_Aplanarity__470->SetBinError(2,20.71208);
   VH_tagFirst_Aplanarity__470->SetBinError(3,10.92087);
   VH_tagFirst_Aplanarity__470->SetBinError(4,6.003736);
   VH_tagFirst_Aplanarity__470->SetBinError(5,3.938634);
   VH_tagFirst_Aplanarity__470->SetBinError(6,2.731786);
   VH_tagFirst_Aplanarity__470->SetBinError(7,2.989111);
   VH_tagFirst_Aplanarity__470->SetBinError(8,1.258573);
   VH_tagFirst_Aplanarity__470->SetBinError(9,0.986097);
   VH_tagFirst_Aplanarity__470->SetBinError(10,0.9123806);
   VH_tagFirst_Aplanarity__470->SetBinError(11,1.064788);
   VH_tagFirst_Aplanarity__470->SetBinError(12,0.8852998);
   VH_tagFirst_Aplanarity__470->SetBinError(13,0.8996827);
   VH_tagFirst_Aplanarity__470->SetBinError(14,0.4963995);
   VH_tagFirst_Aplanarity__470->SetBinError(15,0.2351965);
   VH_tagFirst_Aplanarity__470->SetBinError(16,0.08233285);
   VH_tagFirst_Aplanarity__470->SetBinError(17,0.1906407);
   VH_tagFirst_Aplanarity__470->SetBinError(18,0.4094651);
   VH_tagFirst_Aplanarity__470->SetBinError(19,0.1874799);
   VH_tagFirst_Aplanarity__470->SetEntries(209648);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__470->SetLineColor(ci);
   VH_tagFirst_Aplanarity__470->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__470->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__470->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__470->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__470->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__470->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__470->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__470->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__470->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__470->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__470->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__470->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__470->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__470->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__470->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagFirst_17->Modified();
   Aplanarity_SingleTop_tagFirst_17->cd();
   Aplanarity_SingleTop_tagFirst_17->SetSelected(Aplanarity_SingleTop_tagFirst_17);
}

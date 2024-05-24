#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagOnly_16/Aplanarity_SingleTop_tagOnly_16
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagOnly_16 = new TCanvas("Aplanarity_SingleTop_tagOnly_16", "Aplanarity_SingleTop_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagOnly_16->SetHighLightColor(2);
   Aplanarity_SingleTop_tagOnly_16->Range(-0.2,-2631.212,1.133333,23680.91);
   Aplanarity_SingleTop_tagOnly_16->SetFillColor(0);
   Aplanarity_SingleTop_tagOnly_16->SetFillStyle(4000);
   Aplanarity_SingleTop_tagOnly_16->SetBorderMode(0);
   Aplanarity_SingleTop_tagOnly_16->SetBorderSize(2);
   Aplanarity_SingleTop_tagOnly_16->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_16->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1189 = new TH1D("VH_tagOnly_Aplanarity__1189","",50,0,1);
   VH_tagOnly_Aplanarity__1189->SetBinContent(1,20047.33);
   VH_tagOnly_Aplanarity__1189->SetBinContent(2,2886.549);
   VH_tagOnly_Aplanarity__1189->SetBinContent(3,742.3939);
   VH_tagOnly_Aplanarity__1189->SetBinContent(4,253.2446);
   VH_tagOnly_Aplanarity__1189->SetBinContent(5,93.44817);
   VH_tagOnly_Aplanarity__1189->SetBinContent(6,47.32651);
   VH_tagOnly_Aplanarity__1189->SetBinContent(7,27.21365);
   VH_tagOnly_Aplanarity__1189->SetBinContent(8,13.82609);
   VH_tagOnly_Aplanarity__1189->SetBinContent(9,9.857424);
   VH_tagOnly_Aplanarity__1189->SetBinContent(10,7.013435);
   VH_tagOnly_Aplanarity__1189->SetBinContent(11,3.826484);
   VH_tagOnly_Aplanarity__1189->SetBinContent(12,1.54429);
   VH_tagOnly_Aplanarity__1189->SetBinContent(13,1.819879);
   VH_tagOnly_Aplanarity__1189->SetBinContent(14,0.9093203);
   VH_tagOnly_Aplanarity__1189->SetBinContent(15,0.6235668);
   VH_tagOnly_Aplanarity__1189->SetBinContent(16,0.3739054);
   VH_tagOnly_Aplanarity__1189->SetBinContent(17,0.1106258);
   VH_tagOnly_Aplanarity__1189->SetBinContent(18,0.4991102);
   VH_tagOnly_Aplanarity__1189->SetBinContent(19,0.0701326);
   VH_tagOnly_Aplanarity__1189->SetBinContent(20,0.3759491);
   VH_tagOnly_Aplanarity__1189->SetBinError(1,52.43981);
   VH_tagOnly_Aplanarity__1189->SetBinError(2,19.63041);
   VH_tagOnly_Aplanarity__1189->SetBinError(3,10.07211);
   VH_tagOnly_Aplanarity__1189->SetBinError(4,5.926623);
   VH_tagOnly_Aplanarity__1189->SetBinError(5,3.521038);
   VH_tagOnly_Aplanarity__1189->SetBinError(6,2.649115);
   VH_tagOnly_Aplanarity__1189->SetBinError(7,2.072923);
   VH_tagOnly_Aplanarity__1189->SetBinError(8,1.398438);
   VH_tagOnly_Aplanarity__1189->SetBinError(9,1.229675);
   VH_tagOnly_Aplanarity__1189->SetBinError(10,1.081816);
   VH_tagOnly_Aplanarity__1189->SetBinError(11,0.7352571);
   VH_tagOnly_Aplanarity__1189->SetBinError(12,0.3970577);
   VH_tagOnly_Aplanarity__1189->SetBinError(13,0.4879128);
   VH_tagOnly_Aplanarity__1189->SetBinError(14,0.3917604);
   VH_tagOnly_Aplanarity__1189->SetBinError(15,0.2741586);
   VH_tagOnly_Aplanarity__1189->SetBinError(16,0.2202026);
   VH_tagOnly_Aplanarity__1189->SetBinError(17,0.06493686);
   VH_tagOnly_Aplanarity__1189->SetBinError(18,0.3561938);
   VH_tagOnly_Aplanarity__1189->SetBinError(19,0.04981902);
   VH_tagOnly_Aplanarity__1189->SetBinError(20,0.3071843);
   VH_tagOnly_Aplanarity__1189->SetEntries(390931);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1189->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1189->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1189->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1189->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1189->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1189->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1189->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1189->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1189->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1189->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1189->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1189->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1189->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1189->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1189->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1189->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagOnly_16->Modified();
   Aplanarity_SingleTop_tagOnly_16->cd();
   Aplanarity_SingleTop_tagOnly_16->SetSelected(Aplanarity_SingleTop_tagOnly_16);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagOnly_2b1c_16/Aplanarity_SingleTop_tagOnly_2b1c_16
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagOnly_2b1c_16 = new TCanvas("Aplanarity_SingleTop_tagOnly_2b1c_16", "Aplanarity_SingleTop_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagOnly_2b1c_16->SetHighLightColor(2);
   Aplanarity_SingleTop_tagOnly_2b1c_16->Range(-0.2,-7515.453,1.133333,67639.07);
   Aplanarity_SingleTop_tagOnly_2b1c_16->SetFillColor(0);
   Aplanarity_SingleTop_tagOnly_2b1c_16->SetFillStyle(4000);
   Aplanarity_SingleTop_tagOnly_2b1c_16->SetBorderMode(0);
   Aplanarity_SingleTop_tagOnly_2b1c_16->SetBorderSize(2);
   Aplanarity_SingleTop_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3349 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3349","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(1,57260.59);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(2,8387.185);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(3,2092.762);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(4,668.163);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(5,252.2665);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(6,121.2454);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(7,63.13174);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(8,33.11413);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(9,22.73815);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(10,15.17027);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(11,8.594645);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(12,4.316996);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(13,3.852427);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(14,1.842203);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(15,1.205068);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(16,1.063424);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(17,0.3116978);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(18,0.7642637);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(19,0.08574707);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinContent(20,0.3759491);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(1,83.8951);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(2,31.61765);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(3,16.01796);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(4,9.114785);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(5,5.666639);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(6,4.044444);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(7,2.933518);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(8,2.091603);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(9,1.844409);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(10,1.469874);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(11,1.085719);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(12,0.7559262);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(13,0.7139101);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(14,0.4796218);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(15,0.3365605);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(16,0.4007731);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(17,0.180359);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(18,0.4252987);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(19,0.05220868);
   VH_tagOnly_2b1c_Aplanarity__3349->SetBinError(20,0.3071843);
   VH_tagOnly_2b1c_Aplanarity__3349->SetEntries(1232100);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3349->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3349->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3349->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3349->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3349->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3349->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3349->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3349->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3349->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3349->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3349->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3349->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3349->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3349->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3349->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3349->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagOnly_2b1c_16->Modified();
   Aplanarity_SingleTop_tagOnly_2b1c_16->cd();
   Aplanarity_SingleTop_tagOnly_2b1c_16->SetSelected(Aplanarity_SingleTop_tagOnly_2b1c_16);
}

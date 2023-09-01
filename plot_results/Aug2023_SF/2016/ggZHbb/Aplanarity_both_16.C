#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-1.149712,1.133333,10.34741);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__958 = new TH1D("VbbHcc_both_Aplanarity__958","",50,0,1);
   VbbHcc_both_Aplanarity__958->SetBinContent(1,8.759712);
   VbbHcc_both_Aplanarity__958->SetBinContent(2,2.899109);
   VbbHcc_both_Aplanarity__958->SetBinContent(3,1.49698);
   VbbHcc_both_Aplanarity__958->SetBinContent(4,0.8748198);
   VbbHcc_both_Aplanarity__958->SetBinContent(5,0.547606);
   VbbHcc_both_Aplanarity__958->SetBinContent(6,0.3522123);
   VbbHcc_both_Aplanarity__958->SetBinContent(7,0.236956);
   VbbHcc_both_Aplanarity__958->SetBinContent(8,0.1696071);
   VbbHcc_both_Aplanarity__958->SetBinContent(9,0.1054648);
   VbbHcc_both_Aplanarity__958->SetBinContent(10,0.07059525);
   VbbHcc_both_Aplanarity__958->SetBinContent(11,0.04391822);
   VbbHcc_both_Aplanarity__958->SetBinContent(12,0.03429716);
   VbbHcc_both_Aplanarity__958->SetBinContent(13,0.02366937);
   VbbHcc_both_Aplanarity__958->SetBinContent(14,0.01677415);
   VbbHcc_both_Aplanarity__958->SetBinContent(15,0.005581702);
   VbbHcc_both_Aplanarity__958->SetBinContent(16,0.004910683);
   VbbHcc_both_Aplanarity__958->SetBinContent(17,0.005046888);
   VbbHcc_both_Aplanarity__958->SetBinContent(18,0.001569484);
   VbbHcc_both_Aplanarity__958->SetBinContent(19,0.001231823);
   VbbHcc_both_Aplanarity__958->SetBinContent(21,0.0005982577);
   VbbHcc_both_Aplanarity__958->SetBinError(1,0.05369621);
   VbbHcc_both_Aplanarity__958->SetBinError(2,0.0306696);
   VbbHcc_both_Aplanarity__958->SetBinError(3,0.02201735);
   VbbHcc_both_Aplanarity__958->SetBinError(4,0.0167455);
   VbbHcc_both_Aplanarity__958->SetBinError(5,0.01330775);
   VbbHcc_both_Aplanarity__958->SetBinError(6,0.01063805);
   VbbHcc_both_Aplanarity__958->SetBinError(7,0.008696178);
   VbbHcc_both_Aplanarity__958->SetBinError(8,0.007385269);
   VbbHcc_both_Aplanarity__958->SetBinError(9,0.005818361);
   VbbHcc_both_Aplanarity__958->SetBinError(10,0.00473587);
   VbbHcc_both_Aplanarity__958->SetBinError(11,0.003710116);
   VbbHcc_both_Aplanarity__958->SetBinError(12,0.003328971);
   VbbHcc_both_Aplanarity__958->SetBinError(13,0.00277373);
   VbbHcc_both_Aplanarity__958->SetBinError(14,0.002342631);
   VbbHcc_both_Aplanarity__958->SetBinError(15,0.00132864);
   VbbHcc_both_Aplanarity__958->SetBinError(16,0.001280605);
   VbbHcc_both_Aplanarity__958->SetBinError(17,0.001271809);
   VbbHcc_both_Aplanarity__958->SetBinError(18,0.0007289945);
   VbbHcc_both_Aplanarity__958->SetBinError(19,0.0006345481);
   VbbHcc_both_Aplanarity__958->SetBinError(21,0.0004249079);
   VbbHcc_both_Aplanarity__958->SetEntries(50200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity__958->SetFillColor(ci);
   VbbHcc_both_Aplanarity__958->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__958->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__958->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__958->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__958->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__958->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__958->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__958->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__958->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__958->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__958->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}

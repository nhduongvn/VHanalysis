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
   Aplanarity_both_16->Range(-0.2,-139.4951,1.133333,1255.456);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__952 = new TH1D("VbbHcc_both_Aplanarity__952","",50,0,1);
   VbbHcc_both_Aplanarity__952->SetBinContent(1,1062.82);
   VbbHcc_both_Aplanarity__952->SetBinContent(2,324.0881);
   VbbHcc_both_Aplanarity__952->SetBinContent(3,159.3558);
   VbbHcc_both_Aplanarity__952->SetBinContent(4,76.9992);
   VbbHcc_both_Aplanarity__952->SetBinContent(5,43.97409);
   VbbHcc_both_Aplanarity__952->SetBinContent(6,32.71442);
   VbbHcc_both_Aplanarity__952->SetBinContent(7,23.05983);
   VbbHcc_both_Aplanarity__952->SetBinContent(8,16.60533);
   VbbHcc_both_Aplanarity__952->SetBinContent(9,8.570096);
   VbbHcc_both_Aplanarity__952->SetBinContent(10,8.371279);
   VbbHcc_both_Aplanarity__952->SetBinContent(11,6.82523);
   VbbHcc_both_Aplanarity__952->SetBinContent(12,2.575875);
   VbbHcc_both_Aplanarity__952->SetBinContent(13,1.690287);
   VbbHcc_both_Aplanarity__952->SetBinContent(14,1.352182);
   VbbHcc_both_Aplanarity__952->SetBinContent(15,3.711161);
   VbbHcc_both_Aplanarity__952->SetBinContent(16,0.6156688);
   VbbHcc_both_Aplanarity__952->SetBinContent(17,0.3724628);
   VbbHcc_both_Aplanarity__952->SetBinContent(18,0.2418218);
   VbbHcc_both_Aplanarity__952->SetBinContent(20,0.06262639);
   VbbHcc_both_Aplanarity__952->SetBinError(1,20.81796);
   VbbHcc_both_Aplanarity__952->SetBinError(2,13.43744);
   VbbHcc_both_Aplanarity__952->SetBinError(3,10.5879);
   VbbHcc_both_Aplanarity__952->SetBinError(4,5.552067);
   VbbHcc_both_Aplanarity__952->SetBinError(5,4.159128);
   VbbHcc_both_Aplanarity__952->SetBinError(6,4.21792);
   VbbHcc_both_Aplanarity__952->SetBinError(7,4.109202);
   VbbHcc_both_Aplanarity__952->SetBinError(8,3.249417);
   VbbHcc_both_Aplanarity__952->SetBinError(9,1.143959);
   VbbHcc_both_Aplanarity__952->SetBinError(10,2.494609);
   VbbHcc_both_Aplanarity__952->SetBinError(11,2.259566);
   VbbHcc_both_Aplanarity__952->SetBinError(12,0.6847668);
   VbbHcc_both_Aplanarity__952->SetBinError(13,0.5522124);
   VbbHcc_both_Aplanarity__952->SetBinError(14,0.4528428);
   VbbHcc_both_Aplanarity__952->SetBinError(15,2.516783);
   VbbHcc_both_Aplanarity__952->SetBinError(16,0.3541654);
   VbbHcc_both_Aplanarity__952->SetBinError(17,0.2313082);
   VbbHcc_both_Aplanarity__952->SetBinError(18,0.2418218);
   VbbHcc_both_Aplanarity__952->SetBinError(20,0.06262639);
   VbbHcc_both_Aplanarity__952->SetEntries(15448);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity__952->SetFillColor(ci);
   VbbHcc_both_Aplanarity__952->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__952->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__952->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__952->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__952->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__952->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__952->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__952->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__952->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__952->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__952->Draw("HIST");
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

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV()
{
//=========Macro generated from canvas: CSV/CSV
//=========  (Wed Mar 27 16:46:18 2024) by ROOT version 6.28/10
   TCanvas *CSV = new TCanvas("CSV", "CSV",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV->SetHighLightColor(2);
   CSV->Range(-0.2,-181.9865,1.133333,1637.878);
   CSV->SetFillColor(0);
   CSV->SetFillStyle(4000);
   CSV->SetBorderMode(0);
   CSV->SetBorderSize(2);
   CSV->SetLeftMargin(0.15);
   CSV->SetFrameFillStyle(1000);
   CSV->SetFrameBorderMode(0);
   CSV->SetFrameFillStyle(1000);
   CSV->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__74 = new TH1D("Jets_cut_CSV__74","",20,0,1);
   Jets_cut_CSV__74->SetBinContent(1,1386.563);
   Jets_cut_CSV__74->SetBinContent(2,220.3218);
   Jets_cut_CSV__74->SetBinContent(3,107.6786);
   Jets_cut_CSV__74->SetBinContent(4,71.66618);
   Jets_cut_CSV__74->SetBinContent(5,52.8401);
   Jets_cut_CSV__74->SetBinContent(6,42.04286);
   Jets_cut_CSV__74->SetBinContent(7,34.19225);
   Jets_cut_CSV__74->SetBinContent(8,27.51694);
   Jets_cut_CSV__74->SetBinContent(9,22.77899);
   Jets_cut_CSV__74->SetBinContent(10,19.51168);
   Jets_cut_CSV__74->SetBinContent(11,18.28163);
   Jets_cut_CSV__74->SetBinContent(12,16.02993);
   Jets_cut_CSV__74->SetBinContent(13,13.975);
   Jets_cut_CSV__74->SetBinContent(14,12.87221);
   Jets_cut_CSV__74->SetBinContent(15,12.23216);
   Jets_cut_CSV__74->SetBinContent(16,12.13261);
   Jets_cut_CSV__74->SetBinContent(17,11.90262);
   Jets_cut_CSV__74->SetBinContent(18,11.69668);
   Jets_cut_CSV__74->SetBinContent(19,15.97597);
   Jets_cut_CSV__74->SetBinContent(20,87.344);
   Jets_cut_CSV__74->SetBinError(1,2.058234);
   Jets_cut_CSV__74->SetBinError(2,0.8118487);
   Jets_cut_CSV__74->SetBinError(3,0.5570453);
   Jets_cut_CSV__74->SetBinError(4,0.4514297);
   Jets_cut_CSV__74->SetBinError(5,0.3849807);
   Jets_cut_CSV__74->SetBinError(6,0.342873);
   Jets_cut_CSV__74->SetBinError(7,0.3122688);
   Jets_cut_CSV__74->SetBinError(8,0.2792085);
   Jets_cut_CSV__74->SetBinError(9,0.2684967);
   Jets_cut_CSV__74->SetBinError(10,0.2282542);
   Jets_cut_CSV__74->SetBinError(11,0.239953);
   Jets_cut_CSV__74->SetBinError(12,0.2122379);
   Jets_cut_CSV__74->SetBinError(13,0.202097);
   Jets_cut_CSV__74->SetBinError(14,0.1830345);
   Jets_cut_CSV__74->SetBinError(15,0.1782382);
   Jets_cut_CSV__74->SetBinError(16,0.1757371);
   Jets_cut_CSV__74->SetBinError(17,0.1845331);
   Jets_cut_CSV__74->SetBinError(18,0.1773013);
   Jets_cut_CSV__74->SetBinError(19,0.2056671);
   Jets_cut_CSV__74->SetBinError(20,0.5111079);
   Jets_cut_CSV__74->SetEntries(1024254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__74->SetLineColor(ci);
   Jets_cut_CSV__74->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__74->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__74->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__74->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__74->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__74->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__74->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__74->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__74->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__74->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__74->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__74->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__74->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__74->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__74->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV->Modified();
   CSV->cd();
   CSV->SetSelected(CSV);
}

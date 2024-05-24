#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZJets_tagOnly_16()
{
//=========Macro generated from canvas: CSV_ZJets_tagOnly_16/CSV_ZJets_tagOnly_16
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZJets_tagOnly_16 = new TCanvas("CSV_ZJets_tagOnly_16", "CSV_ZJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZJets_tagOnly_16->SetHighLightColor(2);
   CSV_ZJets_tagOnly_16->Range(-0.2,-8196929,1.133333,7.377235e+07);
   CSV_ZJets_tagOnly_16->SetFillColor(0);
   CSV_ZJets_tagOnly_16->SetFillStyle(4000);
   CSV_ZJets_tagOnly_16->SetBorderMode(0);
   CSV_ZJets_tagOnly_16->SetBorderSize(2);
   CSV_ZJets_tagOnly_16->SetLeftMargin(0.15);
   CSV_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   CSV_ZJets_tagOnly_16->SetFrameBorderMode(0);
   CSV_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   CSV_ZJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__5143 = new TH1D("Jets_cut_CSV__5143","",20,0,1);
   Jets_cut_CSV__5143->SetBinContent(1,6.245279e+07);
   Jets_cut_CSV__5143->SetBinContent(2,5195258);
   Jets_cut_CSV__5143->SetBinContent(3,2116377);
   Jets_cut_CSV__5143->SetBinContent(4,1244261);
   Jets_cut_CSV__5143->SetBinContent(5,873268.3);
   Jets_cut_CSV__5143->SetBinContent(6,679430.1);
   Jets_cut_CSV__5143->SetBinContent(7,548549.9);
   Jets_cut_CSV__5143->SetBinContent(8,457916);
   Jets_cut_CSV__5143->SetBinContent(9,395985.8);
   Jets_cut_CSV__5143->SetBinContent(10,360742.3);
   Jets_cut_CSV__5143->SetBinContent(11,345661.4);
   Jets_cut_CSV__5143->SetBinContent(12,325930.6);
   Jets_cut_CSV__5143->SetBinContent(13,314304.8);
   Jets_cut_CSV__5143->SetBinContent(14,321353.9);
   Jets_cut_CSV__5143->SetBinContent(15,331616.7);
   Jets_cut_CSV__5143->SetBinContent(16,365886.7);
   Jets_cut_CSV__5143->SetBinContent(17,399062.2);
   Jets_cut_CSV__5143->SetBinContent(18,477169.3);
   Jets_cut_CSV__5143->SetBinContent(19,720086.5);
   Jets_cut_CSV__5143->SetBinContent(20,4139082);
   Jets_cut_CSV__5143->SetBinError(1,18246.31);
   Jets_cut_CSV__5143->SetBinError(2,5439.942);
   Jets_cut_CSV__5143->SetBinError(3,3518.692);
   Jets_cut_CSV__5143->SetBinError(4,2720.823);
   Jets_cut_CSV__5143->SetBinError(5,2294.374);
   Jets_cut_CSV__5143->SetBinError(6,2055.313);
   Jets_cut_CSV__5143->SetBinError(7,1827.255);
   Jets_cut_CSV__5143->SetBinError(8,1665.114);
   Jets_cut_CSV__5143->SetBinError(9,1558.302);
   Jets_cut_CSV__5143->SetBinError(10,1495.98);
   Jets_cut_CSV__5143->SetBinError(11,1479.56);
   Jets_cut_CSV__5143->SetBinError(12,1452.066);
   Jets_cut_CSV__5143->SetBinError(13,1449.329);
   Jets_cut_CSV__5143->SetBinError(14,1487.514);
   Jets_cut_CSV__5143->SetBinError(15,1519.561);
   Jets_cut_CSV__5143->SetBinError(16,1604.837);
   Jets_cut_CSV__5143->SetBinError(17,1681.877);
   Jets_cut_CSV__5143->SetBinError(18,1845.803);
   Jets_cut_CSV__5143->SetBinError(19,2272.356);
   Jets_cut_CSV__5143->SetBinError(20,5365.457);
   Jets_cut_CSV__5143->SetEntries(1.414727e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__5143->SetLineColor(ci);
   Jets_cut_CSV__5143->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__5143->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__5143->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__5143->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5143->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__5143->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__5143->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__5143->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__5143->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__5143->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__5143->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__5143->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__5143->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5143->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__5143->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZJets_tagOnly_16->Modified();
   CSV_ZJets_tagOnly_16->cd();
   CSV_ZJets_tagOnly_16->SetSelected(CSV_ZJets_tagOnly_16);
}

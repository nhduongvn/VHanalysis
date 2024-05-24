#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_SingleTop_DHZfirst_16()
{
//=========Macro generated from canvas: CvL_SingleTop_DHZfirst_16/CvL_SingleTop_DHZfirst_16
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvL_SingleTop_DHZfirst_16 = new TCanvas("CvL_SingleTop_DHZfirst_16", "CvL_SingleTop_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_SingleTop_DHZfirst_16->SetHighLightColor(2);
   CvL_SingleTop_DHZfirst_16->Range(-0.2,-609401.1,1.133333,6539130);
   CvL_SingleTop_DHZfirst_16->SetFillColor(0);
   CvL_SingleTop_DHZfirst_16->SetFillStyle(4000);
   CvL_SingleTop_DHZfirst_16->SetBorderMode(0);
   CvL_SingleTop_DHZfirst_16->SetBorderSize(2);
   CvL_SingleTop_DHZfirst_16->SetLeftMargin(0.15);
   CvL_SingleTop_DHZfirst_16->SetFrameFillStyle(1000);
   CvL_SingleTop_DHZfirst_16->SetFrameBorderMode(0);
   CvL_SingleTop_DHZfirst_16->SetFrameFillStyle(1000);
   CvL_SingleTop_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5959 = new TH1D("Jets_cut_CvL__5959","",20,0,1);
   Jets_cut_CvL__5959->SetBinContent(1,3922552);
   Jets_cut_CvL__5959->SetBinContent(2,5551952);
   Jets_cut_CvL__5959->SetBinContent(3,2241702);
   Jets_cut_CvL__5959->SetBinContent(4,1131603);
   Jets_cut_CvL__5959->SetBinContent(5,720040.6);
   Jets_cut_CvL__5959->SetBinContent(6,552916.4);
   Jets_cut_CvL__5959->SetBinContent(7,457814.1);
   Jets_cut_CvL__5959->SetBinContent(8,399450.2);
   Jets_cut_CvL__5959->SetBinContent(9,372106.4);
   Jets_cut_CvL__5959->SetBinContent(10,364809.1);
   Jets_cut_CvL__5959->SetBinContent(11,369199.4);
   Jets_cut_CvL__5959->SetBinContent(12,382138.8);
   Jets_cut_CvL__5959->SetBinContent(13,417500.2);
   Jets_cut_CvL__5959->SetBinContent(14,464327.9);
   Jets_cut_CvL__5959->SetBinContent(15,533833.6);
   Jets_cut_CvL__5959->SetBinContent(16,635273.3);
   Jets_cut_CvL__5959->SetBinContent(17,768529.6);
   Jets_cut_CvL__5959->SetBinContent(18,985869.7);
   Jets_cut_CvL__5959->SetBinContent(19,1267264);
   Jets_cut_CvL__5959->SetBinContent(20,2032795);
   Jets_cut_CvL__5959->SetBinError(1,995.7806);
   Jets_cut_CvL__5959->SetBinError(2,1174.27);
   Jets_cut_CvL__5959->SetBinError(3,754.0708);
   Jets_cut_CvL__5959->SetBinError(4,536.2006);
   Jets_cut_CvL__5959->SetBinError(5,427.4576);
   Jets_cut_CvL__5959->SetBinError(6,375.3266);
   Jets_cut_CvL__5959->SetBinError(7,340.6917);
   Jets_cut_CvL__5959->SetBinError(8,318.4683);
   Jets_cut_CvL__5959->SetBinError(9,306.9556);
   Jets_cut_CvL__5959->SetBinError(10,304.1245);
   Jets_cut_CvL__5959->SetBinError(11,305.2417);
   Jets_cut_CvL__5959->SetBinError(12,310.4625);
   Jets_cut_CvL__5959->SetBinError(13,324.8144);
   Jets_cut_CvL__5959->SetBinError(14,342.2832);
   Jets_cut_CvL__5959->SetBinError(15,366.63);
   Jets_cut_CvL__5959->SetBinError(16,398.8363);
   Jets_cut_CvL__5959->SetBinError(17,439.1371);
   Jets_cut_CvL__5959->SetBinError(18,496.4404);
   Jets_cut_CvL__5959->SetBinError(19,564.0968);
   Jets_cut_CvL__5959->SetBinError(20,716.215);
   Jets_cut_CvL__5959->SetEntries(3.067202e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5959->SetLineColor(ci);
   Jets_cut_CvL__5959->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5959->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5959->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5959->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5959->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5959->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5959->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5959->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5959->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5959->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5959->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5959->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5959->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5959->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5959->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_SingleTop_DHZfirst_16->Modified();
   CvL_SingleTop_DHZfirst_16->cd();
   CvL_SingleTop_DHZfirst_16->SetSelected(CvL_SingleTop_DHZfirst_16);
}

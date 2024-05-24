#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_WJets_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: CvL_WJets_DHZfirst_2b1c_18/CvL_WJets_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:35 2024) by ROOT version 6.28/10
   TCanvas *CvL_WJets_DHZfirst_2b1c_18 = new TCanvas("CvL_WJets_DHZfirst_2b1c_18", "CvL_WJets_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_WJets_DHZfirst_2b1c_18->SetHighLightColor(2);
   CvL_WJets_DHZfirst_2b1c_18->Range(-0.2,-2.258512e+07,1.133333,2.032661e+08);
   CvL_WJets_DHZfirst_2b1c_18->SetFillColor(0);
   CvL_WJets_DHZfirst_2b1c_18->SetFillStyle(4000);
   CvL_WJets_DHZfirst_2b1c_18->SetBorderMode(0);
   CvL_WJets_DHZfirst_2b1c_18->SetBorderSize(2);
   CvL_WJets_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   CvL_WJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CvL_WJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   CvL_WJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CvL_WJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__8292 = new TH1D("Jets_cut_CvL__8292","",20,0,1);
   Jets_cut_CvL__8292->SetBinContent(1,1.630592e+08);
   Jets_cut_CvL__8292->SetBinContent(2,1.720771e+08);
   Jets_cut_CvL__8292->SetBinContent(3,6.413658e+07);
   Jets_cut_CvL__8292->SetBinContent(4,2.698836e+07);
   Jets_cut_CvL__8292->SetBinContent(5,1.425928e+07);
   Jets_cut_CvL__8292->SetBinContent(6,9274393);
   Jets_cut_CvL__8292->SetBinContent(7,6561235);
   Jets_cut_CvL__8292->SetBinContent(8,4923681);
   Jets_cut_CvL__8292->SetBinContent(9,3986772);
   Jets_cut_CvL__8292->SetBinContent(10,3413974);
   Jets_cut_CvL__8292->SetBinContent(11,3029386);
   Jets_cut_CvL__8292->SetBinContent(12,2687490);
   Jets_cut_CvL__8292->SetBinContent(13,2452875);
   Jets_cut_CvL__8292->SetBinContent(14,2299845);
   Jets_cut_CvL__8292->SetBinContent(15,2294117);
   Jets_cut_CvL__8292->SetBinContent(16,2370379);
   Jets_cut_CvL__8292->SetBinContent(17,2489039);
   Jets_cut_CvL__8292->SetBinContent(18,2876340);
   Jets_cut_CvL__8292->SetBinContent(19,3540053);
   Jets_cut_CvL__8292->SetBinContent(20,1.265839e+07);
   Jets_cut_CvL__8292->SetBinError(1,35383.69);
   Jets_cut_CvL__8292->SetBinError(2,36070.7);
   Jets_cut_CvL__8292->SetBinError(3,25101.6);
   Jets_cut_CvL__8292->SetBinError(4,16179.82);
   Jets_cut_CvL__8292->SetBinError(5,11741.09);
   Jets_cut_CvL__8292->SetBinError(6,9436.788);
   Jets_cut_CvL__8292->SetBinError(7,8033.948);
   Jets_cut_CvL__8292->SetBinError(8,6788.136);
   Jets_cut_CvL__8292->SetBinError(9,6079.861);
   Jets_cut_CvL__8292->SetBinError(10,5691.682);
   Jets_cut_CvL__8292->SetBinError(11,5284.326);
   Jets_cut_CvL__8292->SetBinError(12,4810.089);
   Jets_cut_CvL__8292->SetBinError(13,4709.878);
   Jets_cut_CvL__8292->SetBinError(14,4391.023);
   Jets_cut_CvL__8292->SetBinError(15,4422.377);
   Jets_cut_CvL__8292->SetBinError(16,4497.63);
   Jets_cut_CvL__8292->SetBinError(17,4440.277);
   Jets_cut_CvL__8292->SetBinError(18,4795.482);
   Jets_cut_CvL__8292->SetBinError(19,5264.651);
   Jets_cut_CvL__8292->SetBinError(20,10214.86);
   Jets_cut_CvL__8292->SetEntries(4.144857e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__8292->SetLineColor(ci);
   Jets_cut_CvL__8292->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__8292->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__8292->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__8292->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8292->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__8292->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__8292->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__8292->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__8292->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__8292->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__8292->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__8292->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__8292->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8292->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__8292->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_WJets_DHZfirst_2b1c_18->Modified();
   CvL_WJets_DHZfirst_2b1c_18->cd();
   CvL_WJets_DHZfirst_2b1c_18->SetSelected(CvL_WJets_DHZfirst_2b1c_18);
}

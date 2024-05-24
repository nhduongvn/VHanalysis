#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_SingleTop_DHZfirst_18_logY()
{
//=========Macro generated from canvas: nJet_SingleTop_DHZfirst_18/nJet_SingleTop_DHZfirst_18
//=========  (Fri May 24 12:43:44 2024) by ROOT version 6.28/10
   TCanvas *nJet_SingleTop_DHZfirst_18 = new TCanvas("nJet_SingleTop_DHZfirst_18", "nJet_SingleTop_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_SingleTop_DHZfirst_18->SetHighLightColor(2);
   nJet_SingleTop_DHZfirst_18->Range(-3.3,-0.3539541,15.36667,7.769707);
   nJet_SingleTop_DHZfirst_18->SetFillColor(0);
   nJet_SingleTop_DHZfirst_18->SetFillStyle(4000);
   nJet_SingleTop_DHZfirst_18->SetBorderMode(0);
   nJet_SingleTop_DHZfirst_18->SetBorderSize(2);
   nJet_SingleTop_DHZfirst_18->SetLogy();
   nJet_SingleTop_DHZfirst_18->SetLeftMargin(0.15);
   nJet_SingleTop_DHZfirst_18->SetFrameFillStyle(1000);
   nJet_SingleTop_DHZfirst_18->SetFrameBorderMode(0);
   nJet_SingleTop_DHZfirst_18->SetFrameFillStyle(1000);
   nJet_SingleTop_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__5901 = new TH1D("Jets_cut_nJet__5901","",14,-0.5,13.5);
   Jets_cut_nJet__5901->SetBinContent(1,2835112);
   Jets_cut_nJet__5901->SetBinContent(2,4473911);
   Jets_cut_nJet__5901->SetBinContent(3,4784009);
   Jets_cut_nJet__5901->SetBinContent(4,3096424);
   Jets_cut_nJet__5901->SetBinContent(5,1454809);
   Jets_cut_nJet__5901->SetBinContent(6,511493.1);
   Jets_cut_nJet__5901->SetBinContent(7,146682.2);
   Jets_cut_nJet__5901->SetBinContent(8,36725.41);
   Jets_cut_nJet__5901->SetBinContent(9,8371.687);
   Jets_cut_nJet__5901->SetBinContent(10,1732.502);
   Jets_cut_nJet__5901->SetBinContent(11,363.1995);
   Jets_cut_nJet__5901->SetBinContent(12,77.03932);
   Jets_cut_nJet__5901->SetBinContent(13,16.22713);
   Jets_cut_nJet__5901->SetBinContent(14,5.747011);
   Jets_cut_nJet__5901->SetBinContent(15,0.3908284);
   Jets_cut_nJet__5901->SetBinError(1,544.5765);
   Jets_cut_nJet__5901->SetBinError(2,711.8771);
   Jets_cut_nJet__5901->SetBinError(3,808.4257);
   Jets_cut_nJet__5901->SetBinError(4,794.7026);
   Jets_cut_nJet__5901->SetBinError(5,657.3093);
   Jets_cut_nJet__5901->SetBinError(6,449.0203);
   Jets_cut_nJet__5901->SetBinError(7,269.5583);
   Jets_cut_nJet__5901->SetBinError(8,142.5764);
   Jets_cut_nJet__5901->SetBinError(9,69.28398);
   Jets_cut_nJet__5901->SetBinError(10,30.23749);
   Jets_cut_nJet__5901->SetBinError(11,13.80287);
   Jets_cut_nJet__5901->SetBinError(12,7.09098);
   Jets_cut_nJet__5901->SetBinError(13,3.070713);
   Jets_cut_nJet__5901->SetBinError(14,2.525203);
   Jets_cut_nJet__5901->SetBinError(15,0.3908284);
   Jets_cut_nJet__5901->SetEntries(2.85745e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__5901->SetLineColor(ci);
   Jets_cut_nJet__5901->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__5901->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__5901->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__5901->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5901->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__5901->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__5901->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__5901->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__5901->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__5901->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__5901->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__5901->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__5901->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5901->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__5901->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_SingleTop_DHZfirst_18->Modified();
   nJet_SingleTop_DHZfirst_18->cd();
   nJet_SingleTop_DHZfirst_18->SetSelected(nJet_SingleTop_DHZfirst_18);
}

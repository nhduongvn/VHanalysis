#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV()
{
//=========Macro generated from canvas: CSV/CSV
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *CSV = new TCanvas("CSV", "CSV",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV->SetHighLightColor(2);
   CSV->Range(-0.2,-85276.83,1.133333,767491.4);
   CSV->SetFillColor(0);
   CSV->SetFillStyle(4000);
   CSV->SetBorderMode(0);
   CSV->SetBorderSize(2);
   CSV->SetLeftMargin(0.15);
   CSV->SetFrameFillStyle(1000);
   CSV->SetFrameBorderMode(0);
   CSV->SetFrameFillStyle(1000);
   CSV->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__26 = new TH1D("Jets_cut_CSV__26","",20,0,1);
   Jets_cut_CSV__26->SetBinContent(1,649728.2);
   Jets_cut_CSV__26->SetBinContent(2,103240.4);
   Jets_cut_CSV__26->SetBinContent(3,50457);
   Jets_cut_CSV__26->SetBinContent(4,33581.97);
   Jets_cut_CSV__26->SetBinContent(5,24760.28);
   Jets_cut_CSV__26->SetBinContent(6,19700.81);
   Jets_cut_CSV__26->SetBinContent(7,16022.11);
   Jets_cut_CSV__26->SetBinContent(8,12894.13);
   Jets_cut_CSV__26->SetBinContent(9,10673.98);
   Jets_cut_CSV__26->SetBinContent(10,9142.958);
   Jets_cut_CSV__26->SetBinContent(11,8566.568);
   Jets_cut_CSV__26->SetBinContent(12,7511.449);
   Jets_cut_CSV__26->SetBinContent(13,6548.53);
   Jets_cut_CSV__26->SetBinContent(14,6031.773);
   Jets_cut_CSV__26->SetBinContent(15,5731.855);
   Jets_cut_CSV__26->SetBinContent(16,5685.206);
   Jets_cut_CSV__26->SetBinContent(17,5577.437);
   Jets_cut_CSV__26->SetBinContent(18,5480.933);
   Jets_cut_CSV__26->SetBinContent(19,7486.16);
   Jets_cut_CSV__26->SetBinContent(20,40928.42);
   Jets_cut_CSV__26->SetBinError(1,964.4656);
   Jets_cut_CSV__26->SetBinError(2,380.4232);
   Jets_cut_CSV__26->SetBinError(3,261.0252);
   Jets_cut_CSV__26->SetBinError(4,211.5349);
   Jets_cut_CSV__26->SetBinError(5,180.3977);
   Jets_cut_CSV__26->SetBinError(6,160.6665);
   Jets_cut_CSV__26->SetBinError(7,146.3257);
   Jets_cut_CSV__26->SetBinError(8,130.834);
   Jets_cut_CSV__26->SetBinError(9,125.8146);
   Jets_cut_CSV__26->SetBinError(10,106.9574);
   Jets_cut_CSV__26->SetBinError(11,112.4393);
   Jets_cut_CSV__26->SetBinError(12,99.45231);
   Jets_cut_CSV__26->SetBinError(13,94.70038);
   Jets_cut_CSV__26->SetBinError(14,85.76794);
   Jets_cut_CSV__26->SetBinError(15,83.52044);
   Jets_cut_CSV__26->SetBinError(16,82.34845);
   Jets_cut_CSV__26->SetBinError(17,86.47014);
   Jets_cut_CSV__26->SetBinError(18,83.08139);
   Jets_cut_CSV__26->SetBinError(19,96.37329);
   Jets_cut_CSV__26->SetBinError(20,239.4995);
   Jets_cut_CSV__26->SetEntries(1024254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__26->SetLineColor(ci);
   Jets_cut_CSV__26->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__26->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__26->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__26->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__26->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__26->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__26->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__26->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__26->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__26->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__26->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__26->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__26->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__26->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__26->Draw("hist");
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

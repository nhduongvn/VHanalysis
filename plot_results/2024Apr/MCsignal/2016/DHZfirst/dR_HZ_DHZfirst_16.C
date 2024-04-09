#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_DHZfirst_16()
{
//=========Macro generated from canvas: dR_HZ_DHZfirst_16/dR_HZ_DHZfirst_16
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *dR_HZ_DHZfirst_16 = new TCanvas("dR_HZ_DHZfirst_16", "dR_HZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_DHZfirst_16->SetHighLightColor(2);
   dR_HZ_DHZfirst_16->Range(-1.22,-0.006240446,6.913333,0.05616401);
   dR_HZ_DHZfirst_16->SetFillColor(0);
   dR_HZ_DHZfirst_16->SetFillStyle(4000);
   dR_HZ_DHZfirst_16->SetBorderMode(0);
   dR_HZ_DHZfirst_16->SetBorderSize(2);
   dR_HZ_DHZfirst_16->SetLeftMargin(0.15);
   dR_HZ_DHZfirst_16->SetFrameFillStyle(1000);
   dR_HZ_DHZfirst_16->SetFrameBorderMode(0);
   dR_HZ_DHZfirst_16->SetFrameFillStyle(1000);
   dR_HZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_dR_HZ__172 = new TH1D("VH_DHZfirst_dR_HZ__172","",60,0,6);
   VH_DHZfirst_dR_HZ__172->SetBinContent(3,0.001685004);
   VH_DHZfirst_dR_HZ__172->SetBinContent(4,0.002019656);
   VH_DHZfirst_dR_HZ__172->SetBinContent(5,0.004759535);
   VH_DHZfirst_dR_HZ__172->SetBinContent(6,0.003918888);
   VH_DHZfirst_dR_HZ__172->SetBinContent(8,0.003689176);
   VH_DHZfirst_dR_HZ__172->SetBinContent(9,0.003764671);
   VH_DHZfirst_dR_HZ__172->SetBinContent(11,0.001536546);
   VH_DHZfirst_dR_HZ__172->SetBinContent(12,0.002110621);
   VH_DHZfirst_dR_HZ__172->SetBinContent(13,0.003950647);
   VH_DHZfirst_dR_HZ__172->SetBinContent(15,0.001377241);
   VH_DHZfirst_dR_HZ__172->SetBinContent(17,0.00175819);
   VH_DHZfirst_dR_HZ__172->SetBinContent(18,0.003073116);
   VH_DHZfirst_dR_HZ__172->SetBinContent(19,0.008093296);
   VH_DHZfirst_dR_HZ__172->SetBinContent(20,0.003671837);
   VH_DHZfirst_dR_HZ__172->SetBinContent(21,0.004065884);
   VH_DHZfirst_dR_HZ__172->SetBinContent(22,0.007976642);
   VH_DHZfirst_dR_HZ__172->SetBinContent(23,0.004255054);
   VH_DHZfirst_dR_HZ__172->SetBinContent(24,0.006333057);
   VH_DHZfirst_dR_HZ__172->SetBinContent(26,0.001696123);
   VH_DHZfirst_dR_HZ__172->SetBinContent(27,0.007044897);
   VH_DHZfirst_dR_HZ__172->SetBinContent(28,0.003305162);
   VH_DHZfirst_dR_HZ__172->SetBinContent(29,0.001958619);
   VH_DHZfirst_dR_HZ__172->SetBinContent(30,0.00778447);
   VH_DHZfirst_dR_HZ__172->SetBinContent(31,0.0172026);
   VH_DHZfirst_dR_HZ__172->SetBinContent(32,0.01801098);
   VH_DHZfirst_dR_HZ__172->SetBinContent(33,0.02934682);
   VH_DHZfirst_dR_HZ__172->SetBinContent(34,0.0472732);
   VH_DHZfirst_dR_HZ__172->SetBinContent(35,0.04754625);
   VH_DHZfirst_dR_HZ__172->SetBinContent(36,0.0234149);
   VH_DHZfirst_dR_HZ__172->SetBinContent(37,0.01325643);
   VH_DHZfirst_dR_HZ__172->SetBinContent(38,0.00899418);
   VH_DHZfirst_dR_HZ__172->SetBinContent(39,0.01355949);
   VH_DHZfirst_dR_HZ__172->SetBinContent(40,0.006181721);
   VH_DHZfirst_dR_HZ__172->SetBinContent(41,0.001915725);
   VH_DHZfirst_dR_HZ__172->SetBinContent(42,0.002002857);
   VH_DHZfirst_dR_HZ__172->SetBinContent(45,0.001580854);
   VH_DHZfirst_dR_HZ__172->SetBinContent(48,0.001855691);
   VH_DHZfirst_dR_HZ__172->SetBinError(3,0.001685004);
   VH_DHZfirst_dR_HZ__172->SetBinError(4,0.002019656);
   VH_DHZfirst_dR_HZ__172->SetBinError(5,0.003421586);
   VH_DHZfirst_dR_HZ__172->SetBinError(6,0.002799935);
   VH_DHZfirst_dR_HZ__172->SetBinError(8,0.00245413);
   VH_DHZfirst_dR_HZ__172->SetBinError(9,0.002680202);
   VH_DHZfirst_dR_HZ__172->SetBinError(11,0.001536546);
   VH_DHZfirst_dR_HZ__172->SetBinError(12,0.002110621);
   VH_DHZfirst_dR_HZ__172->SetBinError(13,0.002798645);
   VH_DHZfirst_dR_HZ__172->SetBinError(15,0.001377241);
   VH_DHZfirst_dR_HZ__172->SetBinError(17,0.00175819);
   VH_DHZfirst_dR_HZ__172->SetBinError(18,0.002184439);
   VH_DHZfirst_dR_HZ__172->SetBinError(19,0.004086551);
   VH_DHZfirst_dR_HZ__172->SetBinError(20,0.00261157);
   VH_DHZfirst_dR_HZ__172->SetBinError(21,0.002876346);
   VH_DHZfirst_dR_HZ__172->SetBinError(22,0.00399576);
   VH_DHZfirst_dR_HZ__172->SetBinError(23,0.00252779);
   VH_DHZfirst_dR_HZ__172->SetBinError(24,0.003702441);
   VH_DHZfirst_dR_HZ__172->SetBinError(26,0.001696123);
   VH_DHZfirst_dR_HZ__172->SetBinError(27,0.004069615);
   VH_DHZfirst_dR_HZ__172->SetBinError(28,0.002352694);
   VH_DHZfirst_dR_HZ__172->SetBinError(29,0.001958619);
   VH_DHZfirst_dR_HZ__172->SetBinError(30,0.003897019);
   VH_DHZfirst_dR_HZ__172->SetBinError(31,0.006132302);
   VH_DHZfirst_dR_HZ__172->SetBinError(32,0.006044173);
   VH_DHZfirst_dR_HZ__172->SetBinError(33,0.007717027);
   VH_DHZfirst_dR_HZ__172->SetBinError(34,0.009765687);
   VH_DHZfirst_dR_HZ__172->SetBinError(35,0.009708347);
   VH_DHZfirst_dR_HZ__172->SetBinError(36,0.006811823);
   VH_DHZfirst_dR_HZ__172->SetBinError(37,0.005047376);
   VH_DHZfirst_dR_HZ__172->SetBinError(38,0.004039082);
   VH_DHZfirst_dR_HZ__172->SetBinError(39,0.005213297);
   VH_DHZfirst_dR_HZ__172->SetBinError(40,0.003639621);
   VH_DHZfirst_dR_HZ__172->SetBinError(41,0.001915725);
   VH_DHZfirst_dR_HZ__172->SetBinError(42,0.002002857);
   VH_DHZfirst_dR_HZ__172->SetBinError(45,0.001580854);
   VH_DHZfirst_dR_HZ__172->SetBinError(48,0.001855691);
   VH_DHZfirst_dR_HZ__172->SetEntries(167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_dR_HZ__172->SetLineColor(ci);
   VH_DHZfirst_dR_HZ__172->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VH_DHZfirst_dR_HZ__172->GetXaxis()->SetRange(1,61);
   VH_DHZfirst_dR_HZ__172->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__172->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_dR_HZ__172->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__172->GetYaxis()->SetTitle("Events/0.1");
   VH_DHZfirst_dR_HZ__172->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__172->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_dR_HZ__172->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_dR_HZ__172->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_dR_HZ__172->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__172->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__172->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_dR_HZ__172->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__172->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_DHZfirst_16->Modified();
   dR_HZ_DHZfirst_16->cd();
   dR_HZ_DHZfirst_16->SetSelected(dR_HZ_DHZfirst_16);
}

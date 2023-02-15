#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_16/Z_dR_Bj1_algo_16
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_16 = new TCanvas("Z_dR_Bj1_algo_16", "Z_dR_Bj1_algo_16",0,0,600,600);
   Z_dR_Bj1_algo_16->SetHighLightColor(2);
   Z_dR_Bj1_algo_16->Range(-1.310117,-192107.9,7.029799,1408791);
   Z_dR_Bj1_algo_16->SetFillColor(0);
   Z_dR_Bj1_algo_16->SetFillStyle(4000);
   Z_dR_Bj1_algo_16->SetBorderMode(0);
   Z_dR_Bj1_algo_16->SetBorderSize(2);
   Z_dR_Bj1_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1248701);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",30,0,6);
   st_stack_117->SetMinimum(0);
   st_stack_117->SetMaximum(1248701);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_117->GetXaxis()->SetRange(1,30);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetTitleOffset(1);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.2");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetTitleSize(0.037);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetTitleOffset(1);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,2370.476);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,593114.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,822768.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,540666);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,457054.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,352586.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,267812.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,145080.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,151597.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,104522.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,71581.36);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,64766.12);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,47799.62);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,44529.64);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,27133.92);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,34394.31);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,39402.93);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,14441.43);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,10243.97);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,7025.86);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,4020.129);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,3025.999);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,2532.983);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,160.0393);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,423.4305);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,341.7194);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,47.43677);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,1637);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,9.168776);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,1663.743);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,44308.59);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,64229.98);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,53747.69);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,57385.15);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,47404.23);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,41006.23);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,24587.85);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,33080.82);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,24022.32);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,8242.545);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,8130.493);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,6507.575);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,7054.853);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,4880.539);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,5504.98);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,22602.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,4053.815);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,3342.879);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,2865.848);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,1777.253);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,1720.316);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,1664.784);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,58.74147);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,312.8819);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,310.1822);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,33.07845);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,1604.641);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,9.168776);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(33466);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,1.97283);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,3501.872);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,9698.587);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,12784.21);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,12976.31);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,11236.44);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,9006.554);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,6860.7);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,5238.214);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,4011.864);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,3158.941);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,2535.66);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,2083.025);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,1779.37);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,1536.252);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,1334.856);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,844.705);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,537.7173);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,349.6318);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,228.0083);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,142.7008);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,88.0104);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,53.88298);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,36.54354);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,19.46768);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,12.45283);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,8.26008);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,4.691929);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,2.785115);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,1.953734);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,3.221036);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.3529077);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,14.84897);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,24.75733);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,28.4271);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,28.6052);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,26.58208);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,23.74651);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,20.66749);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,18.02253);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,15.73183);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,13.91987);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,12.45492);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,11.2897);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,10.42013);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,9.671171);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,9.014128);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,7.182401);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,5.730071);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,4.621814);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,3.736776);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,2.955433);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,2.325456);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,1.809679);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,1.504294);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,1.081303);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,0.8726093);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,0.7082649);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,0.5454628);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,0.4167808);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,0.349556);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,0.4447232);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(1481664);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_16->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->SetSelected(Z_dR_Bj1_algo_16);
}

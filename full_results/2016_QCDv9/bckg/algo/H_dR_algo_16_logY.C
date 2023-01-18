#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Wed Jan 18 11:42:52 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.353788,-0.8255216,7.264125,9.064056);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLogy();
   H_dR_algo_16->SetLeftMargin(0.15709);
   H_dR_algo_16->SetRightMargin(0.1234783);
   H_dR_algo_16->SetBottomMargin(0.12);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.077755e+07);
   
   TH1F *st_stack_85 = new TH1F("st_stack_85","",30,0,6);
   st_stack_85->SetMinimum(2.297353);
   st_stack_85->SetMaximum(1.188771e+08);
   st_stack_85->SetDirectory(0);
   st_stack_85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_85->SetLineColor(ci);
   st_stack_85->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_85->GetXaxis()->SetRange(1,31);
   st_stack_85->GetXaxis()->SetLabelFont(42);
   st_stack_85->GetXaxis()->SetTitleOffset(1);
   st_stack_85->GetXaxis()->SetTitleFont(42);
   st_stack_85->GetYaxis()->SetTitle("Events/0.2");
   st_stack_85->GetYaxis()->SetLabelFont(42);
   st_stack_85->GetYaxis()->SetTitleSize(0.037);
   st_stack_85->GetYaxis()->SetTitleFont(42);
   st_stack_85->GetZaxis()->SetLabelFont(42);
   st_stack_85->GetZaxis()->SetTitleOffset(1);
   st_stack_85->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_85);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,270958.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,392498.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,320508.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,360056.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,277547.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,299473.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,326545.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,298017.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,373878.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,368871.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,369746.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,501480.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,317297.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,368564.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,324326.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,241713.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,87184.71);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,52396.23);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,35821.95);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,33157.92);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,7721.006);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,4981.553);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,3580.988);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,387.0434);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,48.87327);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,19.52);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,30878.51);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,54590.28);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,51725.61);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,55867.34);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,46215.14);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,40150.62);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,42685.04);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,40734.91);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,48898.77);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,39727.93);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,48873.69);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,65430.85);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,37518.61);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,43151.3);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,54692.88);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,50100.91);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,20877.97);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,18409.35);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,16835.57);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,19121.03);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,2726.851);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,1718.097);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2130.497);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,322.0597);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,29.1605);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,16.73939);
   VbbHcc_algo_H_dR_stack_1->SetEntries(33722);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,1.276755);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,1940.372);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,4163.55);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,6038.172);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,7752.961);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,8526.109);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,8375.677);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,7966.371);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,7648.333);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,7447.061);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,7260.77);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,6875.458);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,6295.169);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,5744.73);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,5014.824);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,2992.202);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,1845.485);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,1151.929);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,694.4836);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,396.4257);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,207.409);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,111.621);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,53.27926);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,19.75937);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,6.637371);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,2.141541);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.5101038);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,0.04827074);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.2829156);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,11.22973);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,16.42996);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,19.79475);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,22.49426);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,23.72556);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,23.67671);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,23.26128);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,22.89111);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,22.62194);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,22.35218);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,21.72652);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,20.73212);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,19.73896);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,18.40045);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,14.15731);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,11.04653);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,8.662406);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,6.695194);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,5.030487);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,3.600935);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,2.642867);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,1.833659);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.088062);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.6284816);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.3456976);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1711556);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,0.04827074);
   VbbHcc_algo_H_dR_stack_2->SetEntries(1587706);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}

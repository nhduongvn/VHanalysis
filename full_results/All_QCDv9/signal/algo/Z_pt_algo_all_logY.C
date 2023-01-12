#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_all_logY()
{
//=========Macro generated from canvas: Z_pt_algo_all/Z_pt_algo_all
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_all = new TCanvas("Z_pt_algo_all", "Z_pt_algo_all",0,0,600,600);
   Z_pt_algo_all->SetHighLightColor(2);
   Z_pt_algo_all->Range(37.97653,0.4909744,1705.96,2.774147);
   Z_pt_algo_all->SetFillColor(0);
   Z_pt_algo_all->SetFillStyle(4000);
   Z_pt_algo_all->SetBorderMode(0);
   Z_pt_algo_all->SetBorderSize(2);
   Z_pt_algo_all->SetLogy();
   Z_pt_algo_all->SetLeftMargin(0.15709);
   Z_pt_algo_all->SetRightMargin(0.1234783);
   Z_pt_algo_all->SetBottomMargin(0.12);
   Z_pt_algo_all->SetFrameFillStyle(1000);
   Z_pt_algo_all->SetFrameBorderMode(0);
   Z_pt_algo_all->SetFrameFillStyle(1000);
   Z_pt_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(273.0059);
   
   TH1F *st_stack_68 = new TH1F("st_stack_68","",40,0,2000);
   st_stack_68->SetMinimum(5.82043);
   st_stack_68->SetMaximum(351.4226);
   st_stack_68->SetDirectory(0);
   st_stack_68->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_68->SetLineColor(ci);
   st_stack_68->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_68->GetXaxis()->SetRange(7,30);
   st_stack_68->GetXaxis()->SetLabelFont(42);
   st_stack_68->GetXaxis()->SetTitleOffset(1);
   st_stack_68->GetXaxis()->SetTitleFont(42);
   st_stack_68->GetYaxis()->SetTitle("Events/50.0");
   st_stack_68->GetYaxis()->SetLabelFont(42);
   st_stack_68->GetYaxis()->SetTitleSize(0.037);
   st_stack_68->GetYaxis()->SetTitleFont(42);
   st_stack_68->GetZaxis()->SetLabelFont(42);
   st_stack_68->GetZaxis()->SetTitleOffset(1);
   st_stack_68->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_68);
   
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_1 = new TH1D("VbbHcc_algo_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(1,0.6036764);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(2,2.730059);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(3,2.175157);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(4,0.9012386);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(5,0.3270158);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(6,0.1735167);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(7,0.1176778);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(8,0.07895067);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(9,0.02625489);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(10,0.01291755);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(11,0.003940192);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(12,0.003261245);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(13,0.001739168);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(1,0.03553246);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(2,0.07763018);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(3,0.06935633);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(4,0.04422246);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(5,0.02607119);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(6,0.0193081);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(7,0.01574036);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(8,0.012625);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(9,0.007308598);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(10,0.005034639);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(11,0.002874801);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(12,0.002308018);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(13,0.001739168);
   VbbHcc_algo_Z_pt_all_stack_1->SetEntries(4155);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_2 = new TH1D("VbbHcc_algo_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(1,0.0759158);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(2,0.4190902);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(3,0.7534781);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(4,0.381872);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(5,0.1242672);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(6,0.05632172);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(7,0.02572374);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(8,0.01478563);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(9,0.005480159);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(10,0.005272917);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(11,0.002172955);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(12,0.002811323);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(13,0.0002677553);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(14,0.001679906);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(15,0.0009668654);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(16,0.0002140083);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(17,0.0001915038);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(18,0.0007035447);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(19,0.001014109);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(22,0.0002012167);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(23,0.0003691164);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(25,0.0002057899);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(1,0.004719535);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(2,0.0112108);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(3,0.01513334);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(4,0.01054789);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(5,0.006022224);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(6,0.004066546);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(7,0.002697575);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(8,0.002026926);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(9,0.001164971);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(10,0.001178113);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(11,0.0007732965);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(12,0.0009133744);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(13,0.000209421);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(14,0.0007936672);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(15,0.0005052418);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(16,0.0002140083);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(17,0.0001915038);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(18,0.0005226574);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(19,0.0005875749);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(22,0.0002012167);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(23,0.0002614508);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(25,0.0002057899);
   VbbHcc_algo_Z_pt_all_stack_2->SetEntries(7690);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_all->Modified();
   Z_pt_algo_all->cd();
   Z_pt_algo_all->SetSelected(Z_pt_algo_all);
}

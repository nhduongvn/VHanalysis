#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_bckg_18()
{
//=========Macro generated from canvas: CSV_jets_bckg_18/CSV_jets_bckg_18
//=========  (Thu Mar  9 13:30:48 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_bckg_18 = new TCanvas("CSV_jets_bckg_18", "CSV_jets_bckg_18",0,0,600,600);
   CSV_jets_bckg_18->SetHighLightColor(2);
   CSV_jets_bckg_18->Range(-0.2183529,-2.216649e+11,1.171633,1.625543e+12);
   CSV_jets_bckg_18->SetFillColor(0);
   CSV_jets_bckg_18->SetFillStyle(4000);
   CSV_jets_bckg_18->SetBorderMode(0);
   CSV_jets_bckg_18->SetBorderSize(2);
   CSV_jets_bckg_18->SetLeftMargin(0.15709);
   CSV_jets_bckg_18->SetRightMargin(0.1234783);
   CSV_jets_bckg_18->SetBottomMargin(0.12);
   CSV_jets_bckg_18->SetFrameFillStyle(1000);
   CSV_jets_bckg_18->SetFrameBorderMode(0);
   CSV_jets_bckg_18->SetFrameFillStyle(1000);
   CSV_jets_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.440822e+12);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",20,0,1);
   st_stack_12->SetMinimum(0);
   st_stack_12->SetMaximum(1.440822e+12);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_12->GetXaxis()->SetRange(1,20);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Event/0.05");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,1.195801e+12);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,6.531761e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,2.481494e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,1.377129e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,8.969477e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,6.536546e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,5.086966e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,4.092917e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,3.33178e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,2.873489e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,2.58043e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,2.32266e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,2.059304e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,1.952054e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,1.880905e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,1.946399e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,2.006062e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,2.192542e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,3.115797e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,1.956975e+10);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.718374e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,3.93905e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,2.420933e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,1.822788e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,1.451526e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,1.251659e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,1.09088e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,9824897);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,8724117);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,8322393);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,7774094);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,7404118);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,6889084);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,6718227);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,6547377);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,6883488);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,6718468);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,7086362);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,8603848);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,2.16385e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(6.39856e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,8.129284e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,8627254);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,4303775);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,2959061);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,2327897);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,1985941);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,1762017);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,1609971);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,1475209);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,1442936);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,1464328);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,1478909);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,1452636);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,1533136);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,1655157);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1922673);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,2198484);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,2665776);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,4177893);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,3.048413e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,2599.063);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,832.5974);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,588.168);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,487.2201);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,431.0435);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,398.6646);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,374.126);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,357.4771);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,341.4811);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,337.1441);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,339.5602);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,341.1991);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,337.8909);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,347.0019);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,360.0855);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,387.3021);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,414.8042);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,455.8291);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,570.6065);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1547.914);
   VbbHcc_jets_CSV_stack_2->SetEntries(2.471324e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_bckg_18->Modified();
   CSV_jets_bckg_18->cd();
   CSV_jets_bckg_18->SetSelected(CSV_jets_bckg_18);
}

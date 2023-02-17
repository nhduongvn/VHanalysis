#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_all_logY()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Thu Feb 16 10:37:38 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(-1.310117,-0.9621019,7.029799,9.810703);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetLogy();
   Z_dR_tags_all->SetLeftMargin(0.15709);
   Z_dR_tags_all->SetRightMargin(0.1234783);
   Z_dR_tags_all->SetBottomMargin(0.12);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.193012e+08);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(2.141089);
   st_stack_20->SetMaximum(5.412811e+08);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(2,1791.823);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,2081617);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,2109705);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,1542099);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,1440090);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,1275668);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,1041311);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,1040336);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,1164489);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,1117656);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,1118892);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,1281036);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,1451931);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,1673198);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,1767269);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,928925.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,647209.5);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,450020.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,323306.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,193356.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,123963.2);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,79833.68);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,55467.8);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,18977.91);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,11900.74);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,5049.317);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(28,610.9192);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(29,1630.94);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(2,573.2043);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,46146.05);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,36863.94);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,37614.68);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,53492.96);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,47608);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,33702.75);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,34107.26);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,57917.78);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,51114.98);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,46633.82);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,61122.05);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,66501.96);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,68072.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,69929.79);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,34870.71);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,45670.25);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,37560.37);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,39989.03);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,11972.62);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,10201.82);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,6375.127);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,7259.59);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,2984.147);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,3843.206);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,2027.348);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(28,353.1497);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(29,1621.689);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(756507);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,35.14646);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,43112.06);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,83307.13);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,101901.4);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,122652);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,141222.2);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,158966.2);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,179143.1);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,202579.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,231948.7);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,266399.2);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,305586.8);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,345568.3);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,382604.8);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,381606.6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,195345.6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,107733.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,61797.05);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,35211.01);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,19621.96);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,10657.08);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,5516.045);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,2742.276);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,1254.7);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,499.2);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,169.4952);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,39.99511);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,1.757641);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,1.629006);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,59.44);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,82.55388);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,91.36188);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,100.8774);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,107.5547);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,114.2815);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,121.2548);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,128.5159);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,137.9625);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,147.9489);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,158.7998);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,169.3059);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,178.1813);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,178.01);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,127.7687);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,94.93583);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,72.2106);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,54.20872);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,40.89076);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,29.62411);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,21.24248);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,14.77754);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,10.07585);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,7.153193);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,3.700336);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,3.049271);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,0.3599622);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(4.738046e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}

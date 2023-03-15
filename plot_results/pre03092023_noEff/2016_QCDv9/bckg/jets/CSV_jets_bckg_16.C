#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_bckg_16()
{
//=========Macro generated from canvas: CSV_jets_bckg_16/CSV_jets_bckg_16
//=========  (Wed Mar  1 14:06:11 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_bckg_16 = new TCanvas("CSV_jets_bckg_16", "CSV_jets_bckg_16",0,0,600,600);
   CSV_jets_bckg_16->SetHighLightColor(2);
   CSV_jets_bckg_16->Range(-0.2183529,-1.543724e+11,1.171633,1.132064e+12);
   CSV_jets_bckg_16->SetFillColor(0);
   CSV_jets_bckg_16->SetFillStyle(4000);
   CSV_jets_bckg_16->SetBorderMode(0);
   CSV_jets_bckg_16->SetBorderSize(2);
   CSV_jets_bckg_16->SetLeftMargin(0.15709);
   CSV_jets_bckg_16->SetRightMargin(0.1234783);
   CSV_jets_bckg_16->SetBottomMargin(0.12);
   CSV_jets_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_bckg_16->SetFrameBorderMode(0);
   CSV_jets_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.003421e+12);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",20,0,1);
   st_stack_8->SetMinimum(0);
   st_stack_8->SetMaximum(1.003421e+12);
   st_stack_8->SetDirectory(0);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_8->GetXaxis()->SetRange(1,20);
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetTitleOffset(1);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Events/0.05");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetTitleSize(0.037);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetTitleOffset(1);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,6.689009e+11);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,4.109885e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,1.476005e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,7.833733e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,4.996997e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,3.542727e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,2.68176e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,2.132402e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,1.73191e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,1.47646e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,1.313405e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,1.158349e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,1.041684e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,9.851476e+08);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,9.528541e+08);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,9.943409e+08);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,1.016488e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,1.147347e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,1.629163e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,9.161657e+09);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.10419e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,2.712674e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,1.622965e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,1.181132e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,9435249);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,7943118);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,6895040);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,6142119);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,5531665);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,5098074);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,4804405);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,4503903);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,4262663);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,4141979);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,4062469);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,4147220);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,4189886);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,4438176);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,5281818);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,1.257495e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(5.443057e+08);

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
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,4.627759e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,5400069);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,2621464);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,1762624);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,1373318);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,1155748);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,1020944);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,928731.1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,855054.3);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,828425.8);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,829313.4);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,826930.3);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,823309);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,859534.9);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,923151.1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1059853);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,1194415);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,1476705);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,2308321);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,1.457569e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,1759.617);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,594.8689);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,413.3734);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,338.5285);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,298.4541);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,273.4916);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,256.7508);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,244.6118);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,234.4129);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,230.5071);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,230.4377);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,229.8708);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,229.1567);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,233.9634);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,242.2893);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,259.4567);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,275.2489);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,305.8757);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,382.312);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,961.4365);
   VbbHcc_jets_CSV_stack_2->SetEntries(1.431895e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_bckg_16->Modified();
   CSV_jets_bckg_16->cd();
   CSV_jets_bckg_16->SetSelected(CSV_jets_bckg_16);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_all()
{
//=========Macro generated from canvas: CSV_jets_all_all/CSV_jets_all_all
//=========  (Mon Dec 19 11:02:48 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_all = new TCanvas("CSV_jets_all_all", "CSV_jets_all_all",0,0,600,600);
   CSV_jets_all_all->SetHighLightColor(2);
   CSV_jets_all_all->Range(-0.2183529,-3.229041e+12,1.171633,2.367964e+13);
   CSV_jets_all_all->SetFillColor(0);
   CSV_jets_all_all->SetFillStyle(4000);
   CSV_jets_all_all->SetBorderMode(0);
   CSV_jets_all_all->SetBorderSize(2);
   CSV_jets_all_all->SetLeftMargin(0.15709);
   CSV_jets_all_all->SetRightMargin(0.1234783);
   CSV_jets_all_all->SetBottomMargin(0.12);
   CSV_jets_all_all->SetFrameFillStyle(1000);
   CSV_jets_all_all->SetFrameBorderMode(0);
   CSV_jets_all_all->SetFrameFillStyle(1000);
   CSV_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.098877e+13);
   
   TH1F *st_stack_112 = new TH1F("st_stack_112","",20,0,1);
   st_stack_112->SetMinimum(0);
   st_stack_112->SetMaximum(2.098877e+13);
   st_stack_112->SetDirectory(0);
   st_stack_112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_112->SetLineColor(ci);
   st_stack_112->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_112->GetXaxis()->SetRange(1,20);
   st_stack_112->GetXaxis()->SetLabelFont(42);
   st_stack_112->GetXaxis()->SetTitleOffset(1);
   st_stack_112->GetXaxis()->SetTitleFont(42);
   st_stack_112->GetYaxis()->SetTitle("Events/0.05");
   st_stack_112->GetYaxis()->SetLabelFont(42);
   st_stack_112->GetYaxis()->SetTitleSize(0.037);
   st_stack_112->GetYaxis()->SetTitleFont(42);
   st_stack_112->GetZaxis()->SetLabelFont(42);
   st_stack_112->GetZaxis()->SetTitleOffset(1);
   st_stack_112->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_112);
   
   
   TH1D *VbbHcc_jets_all_CSV_all_stack_1 = new TH1D("VbbHcc_jets_all_CSV_all_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(1,1.399199e+13);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(2,6.225324e+12);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(3,8.535219e+11);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(4,3.664005e+11);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(5,2.204188e+11);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(6,1.390306e+11);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(7,1.014473e+11);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(8,7.646149e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(9,5.803928e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(10,4.698053e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(11,3.977221e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(12,3.323028e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(13,2.824912e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(14,2.463579e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(15,2.232252e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(16,2.152356e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(17,2.02632e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(18,2.126309e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(19,2.695671e+10);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(20,1.083987e+11);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(1,5.415757e+08);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(2,3.530198e+08);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(3,1.318159e+08);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(4,8.67312e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(5,6.745041e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(6,5.370209e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(7,4.616109e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(8,3.97283e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(9,3.477916e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(10,3.132222e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(11,2.887833e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(12,2.630833e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(13,2.430815e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(14,2.270292e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(15,2.165345e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(16,2.133065e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(17,2.051235e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(18,2.114421e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(19,2.37132e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(20,4.777332e+07);
   VbbHcc_jets_all_CSV_all_stack_1->SetEntries(5.141745e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_all_stack_2 = new TH1D("VbbHcc_jets_all_CSV_all_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(1,5.207113e+08);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(2,1.871424e+08);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(3,3.816243e+07);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(4,2.024753e+07);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(5,1.432507e+07);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(6,1.109391e+07);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(7,9388788);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(8,8278136);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(9,7338145);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(10,6844650);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(11,6598844);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(12,6365026);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(13,6141257);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(14,6248113);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(15,6533682);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(16,7320483);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(17,8009948);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(18,9548292);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(19,1.434294e+07);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(20,8.610327e+07);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(1,6405.749);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(2,3700.07);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(3,1697.187);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(4,1246.669);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(5,1051.065);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(6,927.3302);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(7,852.8795);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(8,800.0152);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(9,752.8272);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(10,726.9177);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(11,714.9421);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(12,702.9604);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(13,690.625);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(14,696.8581);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(15,712.8338);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(16,753.7019);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(17,788.9797);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(18,860.7111);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(19,1055.175);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(20,2593.85);
   VbbHcc_jets_all_CSV_all_stack_2->SetEntries(1.519822e+10);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_all_stack_1","QCD","F");

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
   CSV_jets_all_all->Modified();
   CSV_jets_all_all->cd();
   CSV_jets_all_all->SetSelected(CSV_jets_all_all);
}

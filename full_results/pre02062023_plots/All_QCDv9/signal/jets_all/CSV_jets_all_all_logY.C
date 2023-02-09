#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_all_logY()
{
//=========Macro generated from canvas: CSV_jets_all_all/CSV_jets_all_all
//=========  (Mon Dec 19 11:03:34 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_all = new TCanvas("CSV_jets_all_all", "CSV_jets_all_all",0,0,600,600);
   CSV_jets_all_all->SetHighLightColor(2);
   CSV_jets_all_all->Range(-0.2183529,-0.4486481,1.171633,7.077651);
   CSV_jets_all_all->SetFillColor(0);
   CSV_jets_all_all->SetFillStyle(4000);
   CSV_jets_all_all->SetBorderMode(0);
   CSV_jets_all_all->SetBorderSize(2);
   CSV_jets_all_all->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(1054370);
   
   TH1F *st_stack_112 = new TH1F("st_stack_112","",20,0,1);
   st_stack_112->SetMinimum(2.847789);
   st_stack_112->SetMaximum(2113589);
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
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(1,9064.972);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(2,4364.727);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(3,853.4458);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(4,445.3284);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(5,308.4159);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(6,230.0818);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(7,185.8292);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(8,153.1328);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(9,123.4336);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(10,108.4607);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(11,97.48645);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(12,85.66676);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(13,74.51093);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(14,67.57512);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(15,62.28038);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(16,61.32693);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(17,57.45382);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(18,59.01034);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(19,74.76098);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinContent(20,324.4073);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(1,4.429121);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(2,3.047491);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(3,1.357949);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(4,0.9832567);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(5,0.8199617);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(6,0.7081217);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(7,0.6364965);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(8,0.5768107);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(9,0.5173237);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(10,0.4859334);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(11,0.4599214);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(12,0.4322916);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(13,0.4023233);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(14,0.3841153);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(15,0.3674656);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(16,0.3649436);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(17,0.354771);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(18,0.3585421);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(19,0.4030775);
   VbbHcc_jets_all_CSV_all_stack_1->SetBinError(20,0.8441085);
   VbbHcc_jets_all_CSV_all_stack_1->SetEntries(1.036165e+07);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(1,1478.732);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(2,629.7313);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(3,127.3745);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(4,67.91621);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(5,47.19704);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(6,35.45106);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(7,28.35009);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(8,23.37517);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(9,19.19326);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(10,16.53072);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(11,15.08955);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(12,13.31369);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(13,11.58681);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(14,10.62852);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(15,9.877068);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(16,9.694832);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(17,9.215677);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(18,9.62095);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(19,12.52874);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinContent(20,61.77399);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(1,0.6561615);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(2,0.4232062);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(3,0.1920722);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(4,0.1408068);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(5,0.117044);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(6,0.1015561);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(7,0.09096618);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(8,0.08258147);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(9,0.07478003);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(10,0.06929745);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(11,0.0660732);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(12,0.06218113);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(13,0.05821081);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(14,0.05548067);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(15,0.05354744);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(16,0.05298143);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(17,0.05163567);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(18,0.05279894);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(19,0.0610753);
   VbbHcc_jets_all_CSV_all_stack_2->SetBinError(20,0.1353726);
   VbbHcc_jets_all_CSV_all_stack_2->SetEntries(1.122788e+07);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_all_stack_1","ZHcc","F");

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
   CSV_jets_all_all->Modified();
   CSV_jets_all_all->cd();
   CSV_jets_all_all->SetSelected(CSV_jets_all_all);
}

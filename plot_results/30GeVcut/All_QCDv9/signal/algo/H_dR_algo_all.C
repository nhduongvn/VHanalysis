#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.353788,-0.4175707,7.264125,3.062185);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetLeftMargin(0.15709);
   H_dR_algo_all->SetRightMargin(0.1234783);
   H_dR_algo_all->SetBottomMargin(0.12);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.71421);
   
   TH1F *st_stack_88 = new TH1F("st_stack_88","",30,0,6);
   st_stack_88->SetMinimum(0);
   st_stack_88->SetMaximum(2.71421);
   st_stack_88->SetDirectory(0);
   st_stack_88->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_88->SetLineColor(ci);
   st_stack_88->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_88->GetXaxis()->SetRange(1,31);
   st_stack_88->GetXaxis()->SetLabelFont(42);
   st_stack_88->GetXaxis()->SetTitleOffset(1);
   st_stack_88->GetXaxis()->SetTitleFont(42);
   st_stack_88->GetYaxis()->SetTitle("Events/0.2");
   st_stack_88->GetYaxis()->SetLabelFont(42);
   st_stack_88->GetYaxis()->SetTitleSize(0.037);
   st_stack_88->GetYaxis()->SetTitleFont(42);
   st_stack_88->GetZaxis()->SetLabelFont(42);
   st_stack_88->GetZaxis()->SetTitleOffset(1);
   st_stack_88->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_88);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,0.1582671);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,0.4448371);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,0.73413);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,1.121505);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,1.222873);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,1.298529);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,1.392971);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,1.15255);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,0.997834);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,0.8679963);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,0.6188417);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,0.4175765);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,0.2880304);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,0.2390977);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,0.08779848);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,0.05070107);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,0.01378912);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,0.01043753);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,0.004215785);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,0.001823718);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,0.004346632);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(24,0.001968042);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(26,0.001758525);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,0.01986393);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,0.03421364);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,0.04360146);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,0.06612289);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,0.05603518);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,0.0578073);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,0.05974414);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,0.05635748);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,0.05068215);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,0.0467904);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,0.03997844);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,0.03193711);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,0.02682067);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,0.02423512);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,0.01470309);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,0.01166315);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,0.005752703);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,0.004354527);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,0.002447902);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,0.001823718);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,0.003146647);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(24,0.001968042);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(26,0.001758525);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(5082);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,0.03873458);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,0.1089667);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,0.2117808);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,0.3725471);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,0.4880522);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,0.490967);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,0.4165022);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,0.2784048);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,0.1773823);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,0.1388041);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,0.1021349);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,0.07258844);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,0.07028253);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,0.05941943);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,0.02866312);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,0.01154278);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,0.00851804);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,0.005165579);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,0.001372352);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,0.001232516);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,0.0002650135);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,0.003484381);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,0.005889465);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,0.008212616);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,0.01136373);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,0.0132633);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,0.01261808);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,0.01158238);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,0.0094926);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,0.007460884);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,0.006748738);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,0.005744997);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,0.004809517);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,0.004736498);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,0.004342434);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,0.003002492);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,0.001975309);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,0.001692217);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,0.00132336);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,0.000715949);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,0.0006308914);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,0.0002650135);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(10346);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}

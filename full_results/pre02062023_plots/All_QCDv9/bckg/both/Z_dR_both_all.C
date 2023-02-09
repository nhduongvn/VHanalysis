#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_all()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(-1.310117,-4193507,7.029799,3.075238e+07);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetLeftMargin(0.15709);
   Z_dR_both_all->SetRightMargin(0.1234783);
   Z_dR_both_all->SetBottomMargin(0.12);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.725779e+07);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(0);
   st_stack_148->SetMaximum(2.725779e+07);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetTitleOffset(1);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Events/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetTitleSize(0.037);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetTitleOffset(1);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(2,9046.541);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,1.376414e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,1.692849e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,1.276225e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,1.136404e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,1.021338e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,1.033058e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,9953048);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,1.090736e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,1.038229e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,1.134517e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,1.287676e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,1.39845e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,1.582608e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,1.715396e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,1.057182e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,6918552);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,5031774);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,3380320);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,2345723);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,1561406);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,1252363);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,661588.6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,441947.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,179449.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,84045.45);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(28,34830.38);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(29,1564.266);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(2,2480.305);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,269072.5);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,322482.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,283901.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,279855.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,264932.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,284328.5);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,279478.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,315086.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,301391.6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,307161.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,339839.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,354347.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,389586.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,400898.7);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,314071);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,252505.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,225965);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,179896.6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,140007.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,116665.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,112562.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,80387.36);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,72605.37);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,32406.63);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,23283.98);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(28,18421.58);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(29,1553.49);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(1578555);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,97.86581);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,142607.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,279003.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,333115);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,405905.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,474353);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,539229.9);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,603302.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,668709);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,738566);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,813045);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,891643.5);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,969493.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,1039318);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,1017899);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,536686.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,306528.2);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,182255.7);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,107881.9);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,62539.71);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,35271.09);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,19091.77);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,9776.764);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,4606.255);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,1931.544);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,668.3189);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,160.3124);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(29,7.877782);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,2.812702);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,110.4305);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,154.3792);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,168.7213);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,186.7181);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,201.529);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,215.0683);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,227.3592);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,239.3978);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,252.2121);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,263.7909);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,276.4553);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,288.8407);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,299.4913);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,296.3511);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,215.9461);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,162.7997);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,125.3164);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,96.67481);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,73.67663);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,55.33744);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,40.83349);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,28.53691);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,19.58502);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,13.26654);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,7.496959);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,4.442834);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(29,0.7644313);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(1.396506e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}

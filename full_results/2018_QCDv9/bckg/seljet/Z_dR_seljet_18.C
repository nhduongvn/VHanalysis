#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_18()
{
//=========Macro generated from canvas: Z_dR_seljet_18/Z_dR_seljet_18
//=========  (Wed Jan 18 11:43:15 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_18 = new TCanvas("Z_dR_seljet_18", "Z_dR_seljet_18",0,0,600,600);
   Z_dR_seljet_18->SetHighLightColor(2);
   Z_dR_seljet_18->Range(-1.310117,-6.197306e+08,7.029799,4.544691e+09);
   Z_dR_seljet_18->SetFillColor(0);
   Z_dR_seljet_18->SetFillStyle(4000);
   Z_dR_seljet_18->SetBorderMode(0);
   Z_dR_seljet_18->SetBorderSize(2);
   Z_dR_seljet_18->SetLeftMargin(0.15709);
   Z_dR_seljet_18->SetRightMargin(0.1234783);
   Z_dR_seljet_18->SetBottomMargin(0.12);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.028249e+09);
   
   TH1F *st_stack_275 = new TH1F("st_stack_275","",30,0,6);
   st_stack_275->SetMinimum(0);
   st_stack_275->SetMaximum(4.028249e+09);
   st_stack_275->SetDirectory(0);
   st_stack_275->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_275->SetLineColor(ci);
   st_stack_275->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_275->GetXaxis()->SetRange(1,30);
   st_stack_275->GetXaxis()->SetLabelFont(42);
   st_stack_275->GetXaxis()->SetTitleOffset(1);
   st_stack_275->GetXaxis()->SetTitleFont(42);
   st_stack_275->GetYaxis()->SetTitle("Events/0.2");
   st_stack_275->GetYaxis()->SetLabelFont(42);
   st_stack_275->GetYaxis()->SetTitleSize(0.037);
   st_stack_275->GetYaxis()->SetTitleFont(42);
   st_stack_275->GetZaxis()->SetLabelFont(42);
   st_stack_275->GetZaxis()->SetTitleOffset(1);
   st_stack_275->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_275);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,1034209);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,7.806504e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,1.431245e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,1.204206e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,1.193986e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,1.247325e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,1.304641e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,1.409633e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,1.525188e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,1.681306e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,1.863628e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,2.080698e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,2.320239e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,2.562874e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,2.682825e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,1.749814e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,1.257267e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,9.399154e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,7.080413e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,5.216352e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,3.754089e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,2.576849e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,1.660152e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,9.826878e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,5.098252e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,2.274966e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,6689713);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,428193.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,99108.84);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,2557242);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,3703810);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,3632227);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,3488826);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,3736663);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,3745512);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,3894136);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,4083885);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,4491170);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,4512701);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,5001717);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,5355914);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,5620663);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,5749276);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,4812646);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,3965715);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,3715275);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,3011620);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,2570333);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,2165947);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,1794536);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,1456394);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,1174952);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,818766.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,551064.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,297401.2);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,72374.16);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(6.913018e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,610.7939);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,570425.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,1117610);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,1358444);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,1666556);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,1929463);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,2127322);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,2265400);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,2360612);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,2440407);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,2521589);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,2609201);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,2700549);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,2788223);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,2674143);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,1451012);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,889326.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,582516.3);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,387576.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,256506.2);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,165769.5);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,103355.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,60411.81);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,31968.95);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,15161.57);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,6011.973);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,1567.918);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,100.8231);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,8.05627);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,238.1185);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,333.1015);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,368.6355);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,408.9739);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,439.5991);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,461.4915);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,475.785);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,486.439);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,495.1475);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,503.4323);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,512.4679);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,522.1074);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,531.0335);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,520.3615);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,383.163);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,298.8522);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,241.2742);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,196.4396);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,159.9924);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,127.9362);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,101.1051);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,76.9315);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,55.32314);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,38.32229);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,23.93175);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,12.47318);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,3.974882);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(4.141391e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_18->Modified();
   Z_dR_seljet_18->cd();
   Z_dR_seljet_18->SetSelected(Z_dR_seljet_18);
}

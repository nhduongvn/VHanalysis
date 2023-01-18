#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_all_logY()
{
//=========Macro generated from canvas: H_dR_seljet_all/H_dR_seljet_all
//=========  (Wed Jan 18 11:42:56 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_all = new TCanvas("H_dR_seljet_all", "H_dR_seljet_all",0,0,600,600);
   H_dR_seljet_all->SetHighLightColor(2);
   H_dR_seljet_all->Range(-1.353788,0.4604272,7.264125,13.82015);
   H_dR_seljet_all->SetFillColor(0);
   H_dR_seljet_all->SetFillStyle(4000);
   H_dR_seljet_all->SetBorderMode(0);
   H_dR_seljet_all->SetBorderSize(2);
   H_dR_seljet_all->SetLogy();
   H_dR_seljet_all->SetLeftMargin(0.15709);
   H_dR_seljet_all->SetRightMargin(0.1234783);
   H_dR_seljet_all->SetBottomMargin(0.12);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(649.3425);
   st->SetMaximum(1.072302e+12);
   
   TH1F *st_stack_280 = new TH1F("st_stack_280","",30,0,6);
   st_stack_280->SetMinimum(115.7696);
   st_stack_280->SetMaximum(3.049166e+12);
   st_stack_280->SetDirectory(0);
   st_stack_280->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_280->SetLineColor(ci);
   st_stack_280->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_280->GetXaxis()->SetRange(1,31);
   st_stack_280->GetXaxis()->SetLabelFont(42);
   st_stack_280->GetXaxis()->SetTitleOffset(1);
   st_stack_280->GetXaxis()->SetTitleFont(42);
   st_stack_280->GetYaxis()->SetTitle("Events/0.2");
   st_stack_280->GetYaxis()->SetLabelFont(42);
   st_stack_280->GetYaxis()->SetTitleSize(0.037);
   st_stack_280->GetYaxis()->SetTitleFont(42);
   st_stack_280->GetZaxis()->SetLabelFont(42);
   st_stack_280->GetZaxis()->SetTitleOffset(1);
   st_stack_280->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_280);
   
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_1 = new TH1D("VbbHcc_seljet_H_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(2,648893.1);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(3,5.302177e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(4,8.659682e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(5,7.578206e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(6,7.963066e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(7,8.917288e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(8,1.063534e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(9,1.332782e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(10,1.729895e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(11,2.345764e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(12,3.264891e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(13,4.620426e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(14,6.495314e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(15,8.893126e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(16,1.071206e+10);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(17,6.784707e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(18,4.756904e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(19,3.483061e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(20,2.567676e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(21,1.864283e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(22,1.322706e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(23,9.083194e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(24,5.913958e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(25,3.517943e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(26,1.853902e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(27,8.366565e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(28,2.378726e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(29,1570259);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(2,86266.8);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(3,2317750);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(4,3267357);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(5,3065845);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(6,3114011);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(7,3324844);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(8,3570290);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(9,3939217);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(10,4352704);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(11,4901139);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(12,5710484);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(13,6658293);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(14,7537005);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(15,8817554);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(16,9472128);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(17,7621539);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(18,6511540);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(19,5708370);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(20,4874895);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(21,4231360);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(22,3490413);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(23,2901168);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(24,2326874);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(25,1809974);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(26,1298582);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(27,898552.8);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(28,483365.3);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(29,141348.3);
   VbbHcc_seljet_H_dR_all_stack_1->SetEntries(2.021266e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_2 = new TH1D("VbbHcc_seljet_H_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(2,449.3865);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(3,522527.3);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(4,1178167);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(5,1602163);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(6,1931331);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(7,2140933);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(8,2337134);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(9,2645737);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(10,3148143);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(11,3907358);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(12,4985771);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(13,6430145);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(14,8213779);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(15,1.017515e+07);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(16,1.096353e+07);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(17,5653009);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(18,3240960);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(19,1977273);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(20,1218624);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(21,745539.3);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(22,448843.2);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(23,262526.8);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(24,146428.4);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(25,75691.5);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(26,34702.27);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(27,13146.41);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(28,3204.678);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(29,187.5401);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(2,7.068859);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(3,205.3169);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(4,309.0241);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(5,360.8626);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(6,396.5349);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(7,417.6224);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(8,436.9389);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(9,466.8611);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(10,510.7936);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(11,570.0882);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(12,646.3522);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(13,736.1487);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(14,834.5305);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(15,931.2368);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(16,968.2444);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(17,694.5674);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(18,524.0933);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(19,408.7405);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(20,320.7416);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(21,249.4066);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(22,192.8436);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(23,147.0857);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(24,109.2172);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(25,78.22306);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(26,52.62218);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(27,32.65916);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(28,16.06349);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(29,3.702759);
   VbbHcc_seljet_H_dR_all_stack_2->SetEntries(1.046864e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_1","QCD","F");

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
   H_dR_seljet_all->Modified();
   H_dR_seljet_all->cd();
   H_dR_seljet_all->SetSelected(H_dR_seljet_all);
}

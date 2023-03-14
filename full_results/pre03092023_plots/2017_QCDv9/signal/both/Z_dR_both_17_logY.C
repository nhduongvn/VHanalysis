#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.310117,-0.1448076,7.029799,1.061923);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetLogy();
   Z_dR_both_17->SetLeftMargin(0.15709);
   Z_dR_both_17->SetRightMargin(0.1234783);
   Z_dR_both_17->SetBottomMargin(0.12);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(-2.485249e+09);
   st_stack_146->SetMaximum(-0.9049414);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetTitleOffset(1);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Event/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetTitleSize(0.037);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetTitleOffset(1);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.3586172);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,0.5699231);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,0.5970416);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,0.5455875);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,0.3418384);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,0.245773);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,0.1950805);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,0.1615724);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.1406216);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.1706721);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.1604505);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.1876899);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,0.2401911);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.2187016);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.08570405);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.03178255);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.02049778);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.01151331);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.003947397);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.003914806);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,0.0007213138);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.02180192);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.02734427);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.0283246);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.02698726);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.02135951);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.01819913);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.0158683);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.01469666);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.01349958);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.01512817);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.01460995);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.01570878);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.01806918);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.01675718);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.01076155);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.00639728);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.005060826);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.00392378);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.002283648);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.002262256);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,0.0007213138);
   VbbHcc_both_Z_dR_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.0001069994);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.1317842);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.2668984);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.2993865);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.2482481);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.1625082);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.08970509);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.06235946);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.05359073);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.05071389);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.06298649);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.06790436);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.07600267);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.08428876);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.08556633);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.03845835);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.01772516);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.01011132);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.006626638);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.003567399);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.003155756);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.001903692);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.0003800467);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.0001208234);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,0.0001290747);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.0001069994);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.004679857);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.006701071);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.007135351);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.006495921);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.005235922);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.00389057);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.003274425);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.003014455);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.002913832);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.003275855);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.003391498);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.003596774);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.003754472);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.003774113);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.002555615);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.001737845);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.001328636);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.001056205);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.0007750964);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.0007270593);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.0005618198);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0002270472);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0001208234);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,0.0001290747);
   VbbHcc_both_Z_dR_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}

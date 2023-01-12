#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_16()
{
//=========Macro generated from canvas: Z_pt_algo_16/Z_pt_algo_16
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_16 = new TCanvas("Z_pt_algo_16", "Z_pt_algo_16",0,0,600,600);
   Z_pt_algo_16->SetHighLightColor(2);
   Z_pt_algo_16->Range(37.97653,-0.1210515,1705.96,0.887711);
   Z_pt_algo_16->SetFillColor(0);
   Z_pt_algo_16->SetFillStyle(4000);
   Z_pt_algo_16->SetBorderMode(0);
   Z_pt_algo_16->SetBorderSize(2);
   Z_pt_algo_16->SetLeftMargin(0.15709);
   Z_pt_algo_16->SetRightMargin(0.1234783);
   Z_pt_algo_16->SetBottomMargin(0.12);
   Z_pt_algo_16->SetFrameFillStyle(1000);
   Z_pt_algo_16->SetFrameBorderMode(0);
   Z_pt_algo_16->SetFrameFillStyle(1000);
   Z_pt_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.7868348);
   
   TH1F *st_stack_65 = new TH1F("st_stack_65","",40,0,2000);
   st_stack_65->SetMinimum(0);
   st_stack_65->SetMaximum(0.7868348);
   st_stack_65->SetDirectory(0);
   st_stack_65->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_65->SetLineColor(ci);
   st_stack_65->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_65->GetXaxis()->SetRange(7,30);
   st_stack_65->GetXaxis()->SetLabelFont(42);
   st_stack_65->GetXaxis()->SetTitleOffset(1);
   st_stack_65->GetXaxis()->SetTitleFont(42);
   st_stack_65->GetYaxis()->SetTitle("Events/50.0");
   st_stack_65->GetYaxis()->SetLabelFont(42);
   st_stack_65->GetYaxis()->SetTitleSize(0.037);
   st_stack_65->GetYaxis()->SetTitleFont(42);
   st_stack_65->GetZaxis()->SetLabelFont(42);
   st_stack_65->GetZaxis()->SetTitleOffset(1);
   st_stack_65->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_65);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.135925);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,0.5245565);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,0.4528866);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,0.2043857);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,0.07360193);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.04861644);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.02512141);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.02485338);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.01074598);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.003091844);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(12,0.001563217);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.01434678);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.02893579);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.02663385);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.01807201);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.01056019);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.008694409);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.006156);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.006281404);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.004062123);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.002186726);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(12,0.001563217);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(1091);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.01719872);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.08549324);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.1514172);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.08290241);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.03026124);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.01495555);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.00715567);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.004825686);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.002915799);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.002383569);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.000566841);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,0.0008106191);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(13,0.0002677553);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(14,0.0003965074);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(15,0.0004089363);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(17,0.0001915038);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(19,0.0005121281);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(22,0.0002012167);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(23,0.0003691164);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(25,0.0002057899);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.001809407);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.004034415);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.005368211);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.003975695);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.002385258);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.001688041);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.001157711);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.0009483924);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.0007538916);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.0006703854);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.000327275);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,0.0003967483);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(13,0.000209421);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(14,0.0002805755);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(15,0.000289349);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(17,0.0001915038);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(19,0.0003053847);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(22,0.0002012167);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(23,0.0002614508);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(25,0.0002057899);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(2298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_16->Modified();
   Z_pt_algo_16->cd();
   Z_pt_algo_16->SetSelected(Z_pt_algo_16);
}

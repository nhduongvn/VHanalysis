#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_17()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-0.02900148,7.029799,0.2126775);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLeftMargin(0.15709);
   Z_dR_algo_17->SetRightMargin(0.1234783);
   Z_dR_algo_17->SetBottomMargin(0.12);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.1885096);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(0);
   st_stack_114->SetMaximum(0.1885096);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetTitleOffset(1);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Event/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetTitleSize(0.037);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetTitleOffset(1);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.07035982);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.1175589);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.1034331);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.08841433);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.04054125);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.0315308);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.01378085);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.01626482);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.01192788);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.005555502);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.008267445);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.001688286);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.01705838);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.009877211);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.009847024);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.005281287);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.005531032);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.001898172);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,0.001955233);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.0120693);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.0150702);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.01363654);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.01307904);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.008991157);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.007503131);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.004925645);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.006173814);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.004573649);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.003211089);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.004155248);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.003276148);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.005729995);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.004427157);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.004427751);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.003191409);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.003218675);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.003415479);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,0.001955233);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(335);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.01860845);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.03890405);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.04768114);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.03403249);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.02243914);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.008935572);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.006466767);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.003625196);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.003111268);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.003448666);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.002415065);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.002794507);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.001406499);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.002756644);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.001804088);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.001840353);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.00181334);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.000762825);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.0001998198);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.0001794384);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.002109536);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.003039629);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.003393351);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.002842352);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.00233107);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.001440609);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.001221284);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.0009452227);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.0008683368);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.0009103409);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.0007439578);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.0008236465);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.0005805722);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.00081322);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.0006684967);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0006590821);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0006921144);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0004414761);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.0001998198);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.0001794384);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(887);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
